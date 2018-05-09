#include "dll.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

DLLIMPORT void HelloWorld() {
    MessageBox (0, "Hello World from DLL!\n", "Hi",
    MB_ICONINFORMATION);
}
