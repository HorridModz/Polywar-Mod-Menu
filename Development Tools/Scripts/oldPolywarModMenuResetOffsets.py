import sys
import re

_OffsetsPath = r"C:\Users\zachy\AndroidStudioProjects\Polywar-Mod-Menu\app\src\main\jni\Hacks\Offsets.h"
_OutputPath = r"C:\Users\zachy\OneDrive\Documents\Work\Temp\Python Temps\modmenuoffsets.cpp"

log = []


def logmessage(message):
    log.append(message)


with open(_OffsetsPath, "r") as original:
    content = str(original.read())
with open(_OutputPath, "w") as backup:
    backup.write(content)
with open(_OffsetsPath, "w") as f:
    new = content
    for charcount in range(8):
        pattern = "0x" + "." * charcount + ";"
        new = re.sub(pattern, "0x69420;", new)
    f.write(new)
