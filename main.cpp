#include <windows.h>

//https://docs.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-setthreadexecutionstate

#define ES_CONTINUOUS       0x80000000
#define ES_DISPLAY_REQUIRED 0x00000002
#define ES_SYSTEM_REQUIRED  0x00000001

int main()
{
    FreeConsole(); //hide console window

    int result = 0;
    while (1)
    {
        result = SetThreadExecutionState(ES_SYSTEM_REQUIRED | ES_DISPLAY_REQUIRED | ES_CONTINUOUS);
        Sleep(30 * 1000);
    }

    return 0;
}
