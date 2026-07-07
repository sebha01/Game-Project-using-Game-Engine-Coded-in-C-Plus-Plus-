#include "Config.h"

class MizuEngineWindow
{
	private:
		//window, monitor and mode variables
		GLFWwindow* window;
		GLFWmonitor* monitor;
		const GLFWvidmode* mode;

	public:
		//Constructor 
		MizuEngineWindow();
		~MizuEngineWindow();

		//Member functions 
		//Initialising and terminating the window
		void WindowInit();
		void WindowUpdate();
		void WindowTerminate();
};