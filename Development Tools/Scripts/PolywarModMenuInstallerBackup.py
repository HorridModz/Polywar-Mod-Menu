import os
import warnings
import shutil
from xml.etree import ElementTree

""" Settings """


class Logging:
    def __init__(self,
                 printwarnings=True,
                 printimportant=True,
                 printveryimportant=True,
                 printsuperimportant=True,
                 printspecial=True,
                 donotprintspecial=False,
                 donotprintsuccessinfo=False,
                 printall=True,
                 printnone=False
                 ):
        self.printwarnings = printwarnings
        self.printimportant = printimportant
        self.printveryimportant = printveryimportant
        self.printsuperimportant = printsuperimportant
        self.printspecial = printspecial
        self.donotprintspecial = donotprintspecial
        self.donotprintsuccessinfo = donotprintsuccessinfo
        self.printall = printall
        self.printnone = printnone
        self.Log = []

    def log(self, message: str, important=True, veryimportant=False, superimportant=False, successinfo=False, special=False):
        # Todo: Colored logs
        self.Log.append(message)
        if self.printnone:
            return
        if successinfo and self.donotprintsuccessinfo:
            return
        if special and self.donotprintspecial:
            return
        if superimportant and (self.printsuperimportant or self.printall):
            self.printmessage(message, "SuperImportant", special)
        elif veryimportant and (self.printveryimportant or self.printall):
            self.printmessage(message, "VeryImportant", special)
        elif important and (self.printsuperimportant or self.printall):
            self.printmessage(message, "Important", special)
        elif (special and self.printspecial) or self.printall:
            self.printmessage(message, "Info", special)

    def printlog(self):
        print(self.Log)

    @staticmethod
    def printmessage(message: str, messagetype: str, special=False):
        if special:
            print(f"[{messagetype}] [Special]: {message}")
        else:
            # Includes Warning Type
            print(f"[{messagetype}]: {message}")

    def warning(self, message: str, type=None):
        if type:
            self.Log.append(f"[Warning]: {type}: {message}")
            if self.printwarnings:
                self.printmessage(f"{type}: {message}", "Warning")
        else:
            self.Log.append(f"[Warning]: {message}")
            if self.printwarnings:
                self.printmessage(f"[Warning]: {message}", "Warning")

def readaftersubstring(sub: str, s: str, lengthwarning=True) -> str:
    """
    This function is based off of
    https://stackoverflow.com/questions/12572362/how-to-get-a-string-after-a-specific-substring/57064170#57064170

    Returns the substring after the delimiter
    If the substring is not found in the string, returns the whole string

    Example:
        String: "Split this string by delimiter"
        Sub:    "string"
        Return: " by delimiter"

    Arguments:
        s: string to split
        sub: delimiter to read after
        lengthwarning: whether to throw a warning if the arguments do not make sense (this is purely
        to catch bugs)

    Return:
        the partition of the string that comes after the delimiter
    """
    if lengthwarning and len(sub) > len(s):
        warnings.warn(f"Call to readaftersubstring(sub={1}, str={2}): substring is longer than full string",
                      SyntaxWarning)
    prefix, found, suffix = s.partition(sub)
    if not found:
        suffix = prefix
    return suffix


def readbeforesubstring(sub: str, s: str, lengthwarning=True) -> str:
    """
    This function is based off of
    https://stackoverflow.com/questions/12572362/how-to-get-a-string-after-a-specific-substring/57064170#57064170

    Returns the substring before the delimiter
    If the substring is not found in the string, returns the whole string

    Example:
        String: "Split this string by delimiter"
        Sub:    "string"
        Return: "Split this "

    Arguments:
        s: string to split
        sub: delimiter to read before
        lengthwarning: whether to throw a warning if the arguments do not make sense (this is purely
        to catch bugs)

    Return:
        the partition of the string that comes before the delimiter
    """
    if lengthwarning and len(sub) > len(s):
        warnings.warn(f"Call to readbeforesubstring(sub={1}, str={2}): substring is longer than full string",
                      SyntaxWarning)
    prefix, found, suffix = s.partition(sub)
    if not found:
        prefix = suffix
    return prefix


def parsexmlfile(path):
    logging.log(f"Parsing xml file {path}...", False)
    parsedxml = ElementTree.parse(path)
    logging.log(f"Successfully parsed xml file {path}", False, successinfo=True)
    return parsedxml


def read_file(path, encoding='utf8', binary=False):
    if binary:
        logging.log(f"Reading file {path} in binary mode...", False)
    else:
        logging.log(f"Reading file {path} with encoding {encoding}...", False)
    if binary:
        with open(path, 'rb') as f:
            content = f.read()
    else:
        with open(path, 'r', encoding=encoding) as f:
            content = f.read()
    if binary:
        logging.log(f"Successfully read file {path} in binary mode", False, successinfo=True)
    else:
        logging.log(f"Successfully read file {path} with encoding {encoding}", False, successinfo=True)
    return content


def write_file(path, new, binary=False):
    if binary:
        logging.log(f"Writing to file {path} in binary mode...", False)
    else:
        logging.log(f"Writing to file {path}...", False)
    if binary:
        with open(path, 'wb') as f:
            f.write(new)
    else:
        with open(path, 'w') as f:
            f.write(new)
    if binary:
        logging.log(f"Successfully wrote to file {path} in binary mode", False, successinfo=True)
    else:
        logging.log(f"Successfully wrote to file {path}", False, successinfo=True)


def copydirectory(oldpath, newpath, cancelifoverwrite=False, loggingimportance=False):
    logging.log(f"Copying directory {oldpath} to {newpath}...", loggingimportance)
    if os.path.exists(newpath):
        if cancelifoverwrite:
            raise Exception(f"Directory {newpath} already exists")
        else:
            logging.log(f"Overwriting directory {newpath}...", True, special=True)
            os.rmdir(newpath)
    try:
        shutil.copytree(oldpath, newpath)
    except Exception as exception:
        logging.warning(f"shutil.Error exception occurred copying directory {oldpath} to {newpath}: {exception}")
    logging.log(f"Successfully copied directory {oldpath} to {newpath}", loggingimportance, successinfo=True)
    return newpath


def copyfile(oldpath, newpath, cancelifoverwrite=False, loggingimportance=False):
    logging.log(f"Copying file {oldpath} to {newpath}...", loggingimportance)
    if os.path.exists(newpath):
        if cancelifoverwrite:
            raise Exception(f"File {newpath} already exists")
        else:
            logging.log(f"Overwriting file {newpath}...", True, special=True)
            os.remove(newpath)
    try:
        shutil.copy(oldpath, newpath)
    except Exception as exception:
        logging.warning(f"shutil.Error exception occurred copying file {oldpath} to {newpath}: {exception}")
    logging.log(f"Successfully copied file {oldpath} to {newpath}", loggingimportance, successinfo=True)
    return newpath


def assertfileexists(path):
    if not(os.path.isfile(path)):
        raise FileNotFoundError(f"Could not find file at path {path}")


def assertfolderexists(path):
    if not (os.path.isdir(path)):
        raise FileNotFoundError(f"Could not find folder at path {path}")


def getimmediate(directory, folders=True, files=True):
    if folders and files:
        return [os.path.join(directory, sub) for sub in os.listdir(directory)]
    elif folders:
        return [os.path.join(directory, sub) for sub in os.listdir(directory) if os.path.isdir(os.path.join(directory, sub))]
    elif files:
        return [os.path.join(directory, sub) for sub in os.listdir(directory) if os.path.isfile(os.path.join(directory, sub))]
    else:
        warnings.warn("Call to getimmediate without folders or files will return empty list", SyntaxWarning)
        return []


class ModMenuInstall:
    def __init__(self,
                 apkpath,
                 newapkpath,
                 modmenuapkpath,
                 modmenulibname,
                 newappname=None,
                 overwriteifexists=False,
                 cancelifexists=False):
        logging.log(f"Installing mod menu {modmenuapkpath} to {newapkpath}...", True, True, True)
        logging.log("Preparing for mod menu installation...", True, True, True)
        paths = {"apkpath": apkpath, "newapkpath": newapkpath, "modmenuapkpath": modmenuapkpath}
        for i, j in zip(paths.keys(), paths.items()):
            if i.endswith(".apk"):
                raise Exception(f"Expected decompiled apk folder for {i}, got apk file {j}")
        if not modmenulibname.endswith(".so"):
            raise Exception(f"Expected name of mod menu lib file, ex \"libModMenu.so\", got {modmenulibname}."
                            f" Did you forget to add '.so' to the end?")
        self.apkpath = os.path.normpath(apkpath)
        self.newapkpath = os.path.normpath(newapkpath)
        self.modmenuapkpath = os.path.normpath(modmenuapkpath)
        self.modmenulibname = modmenulibname
        if os.path.exists(self.newapkpath) and cancelifexists:
            raise Exception(f"Modded apk already exists at path {self.newapkpath}.")
        if os.path.exists(self.newapkpath) and not overwriteifexists:
            logging.log(f"Modded apk already exists at path {self.newapkpath}."
                f" Using this modded apk instead of overwriting it.",
                True, True, special=True)
            self.newapkalreadyexists = True
        else:
            self.newapkalreadyexists = False
        if not self.newapkalreadyexists:
            copydirectory(self.apkpath, self.newapkpath, cancelifoverwrite=False, loggingimportance=True)
        logging.log("Collecting data for mod menu installation...", True, True, True)
        logging.log("Finding smali folders...", True, True)
        self.smalifolders = self._getsmalifolders()
        logging.log("Finding mod menu smali folder...", True, True)
        self.modmenusmalifolder = self._getmodmenusmalifolder()
        logging.log("Finding lib folders...", True, True)
        self.libfolders = self._getlibfolders()
        logging.log("Finding mod menu lib folders...", True, True)
        self.modmenulibfolders = self._getmodmenulibfolders()
        logging.log("Finding AndroidManifest.xml...", True, True)
        self.androidmanifestpath = self._getandroidmanifest()
        logging.log("Finding mainactivity...", True, True)
        self.mainactivity = self._getmainactivity()
        logging.log("Finding mainactivity file...", True, True)
        self.mainactivitypath = self._getmainactivitypath()
        logging.log("Installing mod menu...", True, True, True)
        if not self.newapkalreadyexists:
            logging.log("Adding permissions...", True, True)
            self.addpermissions()
            logging.log("Adding launcher service...", True, True)
            self.addlauncherservice()
            logging.log("Adding mod menu smali...", True, True)
            self.addmodmenusmali()
        logging.log("Adding mod menu lib...", True, True)
        self.addmodmenulib()
        if newappname:
            logging.log(f"Changing app name to \"{newappname}\"...", True, True)
            self.changeappname(newappname)
        logging.log(f"Successfully installed mod menu!", True, True, True)

    def _getandroidmanifest(self):
        logging.log(f"Finding AndroidManifest.xml in {self.newapkpath}...", True)
        manifestpath = os.path.join(self.newapkpath, "AndroidManifest.xml")
        assertfileexists(manifestpath)
        logging.log(f"Found AndroidManifest.xml at path {manifestpath}", True, successinfo=True)
        return manifestpath

    def _getmainactivity(self):
        logging.log(f"Finding mainactivity of apk {self.newapkpath}...", True)
        parsedxml = parsexmlfile(self.androidmanifestpath)
        root = parsedxml.getroot()
        try:
            mainactivity = root.findall("application/activity")[0].attrib[
                "{http://schemas.android.com/apk/res/android}name"]
            logging.log(f"Found mainactivity: {mainactivity}", True, successinfo=True)
            return mainactivity
        except Exception:
            raise Exception(
                f"Failed to determine mainactivity of apk {self.newapkpath}"
                f" via AndroidManifest.xml at path {self.androidmanifestpath}")

    def _getmainactivitypath(self, recurse=0):
        if recurse == 0:
            logging.log(f"Finding mainactivity file in {self.newapkpath}...", True)
        relativepath = self.mainactivity.replace(".", "\\", (self.mainactivity.count(".") - recurse))\
                       + ".smali"
        found = False
        # It's impossible for mainactivitypath to be referenced before assignment in line 130
        # However, my ide isn't smart enough to know that, so we set it to None to stop it from complaining
        mainactivitypath = None
        for smalifolder in self.smalifolders:
            mainactivitypath = os.path.join(smalifolder, relativepath)
            if os.path.exists(mainactivitypath):
                found = True
                break
        if found:
            logging.log(f"Found mainactivity file at path {mainactivitypath}", True)
            return mainactivitypath
        elif recurse < self.mainactivity.count("."):
            return self._getmainactivitypath(recurse + 1)
        else:
            raise Exception(f"Failed to find mainactivity file ({self.mainactivity}) in {self.newapkpath}")


    def _getsmalifolders(self):
        logging.log(f"Finding all smali folders in {self.newapkpath}...", True)
        folders = getimmediate(self.newapkpath, True, False)
        smalifolders = [folder for folder in folders if "smali" in folder]
        if not smalifolders:
            raise Exception(f"Found no smali folders in {self.newapkpath}")
        logging.log(f"Found all smali folders", True, successinfo=True)
        return smalifolders

    def _getmodmenusmalifolder(self):
        logging.log(f"Finding smali folder in {self.modmenuapkpath}...", True)
        modmenusmalipath = os.path.join(self.modmenuapkpath, "smali")
        assertfolderexists(modmenusmalipath)
        modmenusmalifolders = getimmediate(modmenusmalipath, True, False)
        if not modmenusmalifolders:
            raise Exception(f"Found no subfolders in mod menu smali folder at {modmenusmalipath}")
        if len(modmenusmalifolders) > 1:
            raise Exception(f"Found multiple subfolders in mod menu smali folder at {modmenusmalipath}, only expected one")
        logging.log(f"Found mod menu smali folder", True, successinfo=True)
        return modmenusmalifolders[0]

    def _getlibfolders(self):
        logging.log(f"Finding lib folders in {self.newapkpath}...", True)
        libpath = os.path.join(self.newapkpath, "lib")
        assertfolderexists(libpath)
        libfolders = getimmediate(libpath, True, False)
        if not libfolders:
            raise Exception(f"Found no subfolders in lib folder at {libpath}")
        logging.log(f"Found lib folders", True, successinfo=True)
        return libfolders

    def _getmodmenulibfolders(self):
        logging.log(f"Finding lib folders in {self.modmenuapkpath}...", True)
        modmenulibpath = os.path.join(self.modmenuapkpath, "lib")
        assertfolderexists(modmenulibpath)
        modmenulibfolders = getimmediate(modmenulibpath, True, False)
        if not modmenulibfolders:
            raise Exception(f"Found no subfolders in mod menu lib folder at {modmenulibpath}")
        logging.log(f"Found mod menu lib folders", True, successinfo=True)
        return modmenulibfolders

    def changeappname(self, newappname):
        logging.log(f"Changing application name to \"{newappname}\" in AndroidManifest.xml..", True)
        logging.warning("Changeappname function has not been implemented yet", "NotImplemented")
        return
        logging.log(f"Updating AndroidManifest.xml file...", False)
        content = read_file(self.androidmanifestpath)
        write_file(self.androidmanifestpath, content)
        logging.log(f"Successfully updated AndroidManifest.xml file", False, successinfo=True)
        logging.log(f"Successfully changed application name to \"{newappname}\" in AndroidManifest.xml", True, successinfo=True)

    def addpermissions(self):
        logging.log("Adding permissions to AndroidManifest.xml...", True)
        content = read_file(self.androidmanifestpath)
        requiredpermissions = ["<uses-permission android:name=\"android.permission.SYSTEM_ALERT_WINDOW\"/>"]
        permissionsstring = "\n".join(requiredpermissions)
        if permissionsstring != "":
            tryexistingpermissions = ["<uses-permission android:name=\"android.permission.GET_ACCOUNTS\"/>",
                                      "<uses-permission android:name=\"android.permission.SYSTEM_ALERT_WINDOW\"/>",
                                      "<uses-permission android:name=\"android.permission.WRITE_EXTERNAL_STORAGE\"/>",
                                      "<uses-permission android:name=\"com.android.vending.CHECK_LICENSE\"/>",
                                      "<uses-permission android:name=\"android.permission.INTERNET\"/>",
                                      "<uses-permission android:name=\"android.permission.WAKE_LOCK\"/>",
                                      "<uses-permission android:name=\"android.permission.ACCESS_NETWORK_STATE\"/>",
                                      "<uses-permission android:name=\"android.permission.ACCESS_WIFI_STATE\"/>",
                                      "<uses-permission android:name=\"android.permission.VIBRATE\"/>",
                                      "<uses-permission android:name=\"com.android.vending.BILLING\"/>",
                                      "<uses-permission android:name=\"com.google.android.c2dm.permission.RECEIVE\"/>"
                                      ]
            found = False
            for tryexistingpermission in tryexistingpermissions:
                if tryexistingpermission in content:
                    found = True
                    for addingpermission in requiredpermissions:
                        logging.log(f"Adding permission {addingpermission}"
                            f" next to existing permission {tryexistingpermission}"
                            f" in AndroidManifest.xml...", False)
                    content = content.replace(tryexistingpermission, f"{permissionsstring}\n\t{tryexistingpermission}")
                    break
            if not found:
                raise Exception(f"Failed to find permissions in AndroidManifest.xml at {self.androidmanifestpath}")
            logging.log(f"Updating AndroidManifest.xml file...", False)
            write_file(self.androidmanifestpath, content)
            logging.log(f"Successfully updated AndroidManifest.xml file", False, successinfo=True)
            logging.log("Successfully added permissions to AndroidManifest.xml", True, successinfo=True)

    def addlauncherservice(self):
        logging.log("Adding launcher service to AndroidManifest.xml...", True)
        content = read_file(self.androidmanifestpath)
        launcherservice = "<service android:name=\"com.android.support.Launcher\" android:enabled=\"true\"\n\tandroid:exported=\"false\" android:stopWithTask=\"true\" />"
        if "</application>\n</manifest>" in content:
            content = content.replace("</application>\n</manifest>",
                                      launcherservice + "\n" + "</application>\n</manifest>")
        else:
            raise Exception(f"Failed to find application launch service in AndroidManifest.xml at {self.androidmanifestpath}")
        logging.log(f"Updating AndroidManifest.xml file...", False)
        write_file(self.androidmanifestpath, content)
        logging.log(f"Successfully updated AndroidManifest.xml file", False, successinfo=True)
        logging.log("Successfully added launcher service to AndroidManifest.xml", True, successinfo=True)
        logging.log("Adding launch activity to mainactivity file...", True)
        logging.log("Adding launch activity code to onCreate method...", False)
        content = read_file(self.mainactivitypath)
        lines = content.splitlines()
        if ".method protected onCreate(Landroid/os/Bundle;)V" not in content:
            raise Exception(f"Failed to find onCreate method in mainactivity file at {self.mainactivitypath}")
        oncreateline = lines.index(".method protected onCreate(Landroid/os/Bundle;)V")
        lines.insert(oncreateline + 3,
                     "    invoke-static {p0}, Lcom/android/support/Main;->Start(Landroid/content/Context;)V"
                     + "\n")
        content = "\n".join(lines)
        logging.log("Successfully added launch activity code to onCreate method...", False, successinfo=True)
        logging.log(f"Updating mainactivity file...", False)
        write_file(self.mainactivitypath, content)
        logging.log(f"Successfully updated mainactivity file", False, successinfo=True)
        logging.log("Successfully added launch activity to mainactivity file", True, successinfo=True)

    def addmodmenusmali(self):
        logging.log(f"Adding mod menu smali to {self.newapkpath}...", True)
        smaliclassesfolders = [folder for folder in self.smalifolders if "smali_classes" in folder]
        if not smaliclassesfolders:
            newsmaliclassesfoldername = "smali_classes2"
        else:
            lastsmaliclassesfoldername = os.path.basename(smaliclassesfolders[len(smaliclassesfolders) - 1])
            lastsmaliclassesnumber = readaftersubstring("smali_classes", lastsmaliclassesfoldername)
            try:
                newsmaliclassesnumber = str(int(lastsmaliclassesnumber) + 1)
            except ValueError:
                newsmaliclassesnumber = "2"
            newsmaliclassesfoldername = f"smali_classes{newsmaliclassesnumber}"
        newsmaliclassesfolder = os.path.join(self.newapkpath, newsmaliclassesfoldername)
        logging.log(f"Creating new smali_classes folder in {self.newapkpath}: {newsmaliclassesfoldername}...", False)
        os.mkdir(newsmaliclassesfolder)
        logging.log(f"Successfully created {newsmaliclassesfoldername} folder in {self.newapkpath}", False, successinfo=True)
        logging.log(f"Adding mod menu smali to {newsmaliclassesfoldername}...", False)
        copydirectory(self.modmenusmalifolder, os.path.join(newsmaliclassesfolder,os.path.basename(self.modmenusmalifolder)),
                      cancelifoverwrite=False, loggingimportance=False)
        logging.log(f"Successfully added mod menu smali to {self.newapkpath}", True, successinfo=True)

    def addmodmenulib(self):
        logging.log(f"Adding mod menu lib to {self.newapkpath}...", True)
        for libfolder, modmenulibfolder in zip(self.libfolders, self.modmenulibfolders):
            libfoldername = os.path.basename(libfolder)
            modmenulibfoldername = os.path.basename(modmenulibfolder)
            if libfoldername == modmenulibfoldername:
                logging.log(f"Found {libfoldername} lib folder in {self.newapkpath}", False)
                modmenulibfile = os.path.join(modmenulibfolder, self.modmenulibname)
                newlibfile = os.path.join(libfolder, self.modmenulibname)
                logging.log(f"Adding mod menu lib {modmenulibfile} to {libfoldername}...", False)
                if not self.newapkalreadyexists and os.path.exists(newlibfile):
                    raise Exception(f"Mod menu lib file already exists at {newlibfile}")
                else:
                    copyfile(modmenulibfile, newlibfile, cancelifoverwrite=False, loggingimportance=False)
        logging.log(f"Successfully added mod menu lib to {self.newapkpath}", True, successinfo=True)

logging = Logging(printwarnings=True,
                  printimportant=True,
                  printveryimportant=True,
                  printsuperimportant=True,
                  printspecial=True,
                  donotprintspecial=False,
                  donotprintsuccessinfo=False,
                  printall=True,
                  printnone=False
                  )
ModMenuInstall(r"C:\Users\zachy\OneDrive\Documents\APK Easy Tool\1-Decompiled APKs\POLYWAR V1.2",
               r"C:\Users\zachy\OneDrive\Documents\APK Easy Tool\1-Decompiled APKs\Modded POLYWAR V1.2",
               r"C:\Users\zachy\OneDrive\Documents\APK Easy Tool\1-Decompiled APKs\app-debug",
               r"libModMenu.so",
               newappname="POLYWAR V1.2 Modded by HorridModz",
               overwriteifexists=False,
               cancelifexists=False)
