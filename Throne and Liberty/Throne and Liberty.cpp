// Throne and Liberty.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <Windows.h>

int main()
{
    DWORD buffer = 0;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    WriteConsoleA(hConsole, "Check out the Throne and Liberty Speeder at https://throneandlibertycheats.com/\n", 110, &buffer, NULL);
    Sleep(10000);
    return 0;
}

extern "C" void mainCRTStartup() {
    main();
    ExitProcess(0);
}
