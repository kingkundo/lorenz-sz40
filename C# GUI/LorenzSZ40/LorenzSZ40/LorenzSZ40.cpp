// LorenzSZ40.cpp : main project file.


#include "stdafx.h"

// Public manager for the Lorenz Machine
LorenzManager manager;

#include "Form1.h"

using namespace LorenzSZ40;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
