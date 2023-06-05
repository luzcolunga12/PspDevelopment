#include <pspkernel.h>
#include <pspdebug.h>

PSP_MODULE_INFO("Tutorial", 0, 1 , 0);

auto main() ->int{
    pspDebugScreenInit();

    pspDebugScreenPrintf("Hello World from C++!");
}