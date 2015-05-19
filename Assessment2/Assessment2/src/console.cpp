#include "console.h"


/** \brief
* Defult initialiser.
*
*/
Console::Console(){} // end Console::Console();

Console::~Console(){} // end Console::~Console();


/** \brief
* Clears and sets up the console screen buffer.
*
*/
void Console::refresh(){

    HANDLE std_oHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    //HWND win = GetWindow("std","Samuel");
    CONSOLE_SCREEN_BUFFER_INFO buffer;
    DWORD count;
    DWORD cellCount;
    COORD origin = {0, 0};
    const COORD size = {80, 530};
    const WORD colour = FOREGROUND_BLUE | (BACKGROUND_RED|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
    //ShowScrollBar(std_oHandle, SB_BOTH, FALSE);
    //SetSysColors(1,COLOR_BACKGROUND,255);
    if (std_oHandle == INVALID_HANDLE_VALUE)
      return;

    SetConsoleScreenBufferSize(std_oHandle, size);

    // Get the number of cells in the current buffer
    if (!GetConsoleScreenBufferInfo(std_oHandle, &buffer))
      return;



    cellCount = buffer.dwSize.X * buffer.dwSize.Y;
    SetConsoleTextAttribute(std_oHandle, colour);

    // Fill the entire buffer with spaces
    if (!FillConsoleOutputCharacter(std_oHandle, ' ', cellCount, origin, &count))
      return;

    // Fill the entire buffer with the current colors and attributes
    if (!FillConsoleOutputAttribute(std_oHandle, colour, cellCount, origin, &count))
      return;

    // Move the cursor home
    SetConsoleCursorPosition(std_oHandle, origin);

} // end Console::refresh();


/** \brief
* Sets the title of the console.
*
*/
void Console::setTitle(char* title){
    SetConsoleTitle(title);
} // end Console::setTitle(char* title);
