// Mizu Engine.cpp : Defines the entry point for the application.
//

#include "Window/MizuEngineWindow.h"

int main()
{
	MizuEngineWindow ME_Window;

	//Initialise the window context and settings
	ME_Window.WindowInit();

	//Update the window 
	ME_Window.WindowUpdate();
	
	//Terminate the window
	ME_Window.WindowTerminate();
	
	return 0;
}
