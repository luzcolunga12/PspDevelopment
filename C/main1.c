#include <pspkernel.h>
#include <pspdebug.h>

PSP_MODULE_INFO("Tutorial", 0, 1, 0); //kernel

int main(){
    pspDebugScreenInit();

    pspDebugScreenerPrintf("Hello World C!");
}