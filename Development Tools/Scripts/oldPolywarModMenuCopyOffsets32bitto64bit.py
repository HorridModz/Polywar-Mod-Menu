import sys
import re

_OffsetsPath = r"C:\Users\zachy\AndroidStudioProjects\Polywar-Mod-Menu\app\src\main\jni\Hacks\oldoffsets.h"
_OutputPath = r"C:\Users\zachy\OneDrive\Documents\Work\Temp\Python Temps\modmenuoffsets.cpp"

log = []


def logmessage(message):
    log.append(message)

def get64bit():
    return code[code.find("#if defined(__aarch64__)"):code.find("#else") + len("#else") + 1]

def replace64bit(replaced, resetoffsets=True):
    new = re.sub("\#if defined\(__aarch64__\).*?\#else", replaced, code, flags=re.DOTALL)
    if resetoffsets:
        for charcount in range(8):
            pattern = "0x" + "." * charcount + ";"
            new = re.sub(pattern, "0x69420;", new)
    return(new)

def get32bit():
    return code[code.find("#else"):code.find("#endif") + len("#endif") + 1]

def replace32bit(replaced, resetoffsets=True):
    new = re.sub("\#else.*?\#endif", replaced, code, flags=re.DOTALL)
    if resetoffsets:
        for charcount in range(8):
            pattern = "0x" + "." * charcount + ";"
            new = re.sub(pattern, "0x69420;", new)
    return(new)

with open(_OffsetsPath, "r") as original:
    content = str(original.read())
global code
code = content
with open(_OutputPath, "w") as backup:
    backup.write(content)
new = replace64bit(get32bit().replace("#else","#if defined(__aarch64__)").replace("#endif","#else"))
with open(_OffsetsPath, "w") as f:
    f.write(new)
