/*

        Tom Taylor - 2013/2015

		Screen class

		Controls various windows on the screen. Implemented through Ncurses.

		NOTE: NOT IMPLEMENTED YET. JUST PERFORMS BASIC WINDOWS WINDOW ADJUSTMENT

		
																					    */

#include "Screen.h"
#include <string>
#include <Windows.h>
//#include <ncurses\ncurses.h>

Screen::Screen() { }

Screen::~Screen() { }

// Sets up the screen for multiplatform use.
void Screen::SetupScreen()
{

}

// Sets up the screen for Windows machines only.
void Screen::OldVersionSetup()
{
	// Set command window size and colour (for Windows)
    HWND hWnd = GetConsoleWindow();
    if( hWnd == NULL) { }
    else 
    {
        system("COLOR 02");
        MoveWindow(hWnd,100,100,900,650,TRUE);
    }
}

// Overloaded function to set up the screen for Windows machines only.
void Screen::OldVersionSetup(int newPosX, int newPosY, int newWidth, int newHeight)
{
	// Set command window size and colour (for Windows)
    HWND hWnd = GetConsoleWindow();
    if( hWnd == NULL) { }
    else 
    {
        system("COLOR 02");
        MoveWindow(hWnd,newPosX,newPosY,newWidth,newHeight,TRUE);
    }
}