#include "MizuEngineWindow.h"

MizuEngineWindow::MizuEngineWindow()
{
}

MizuEngineWindow::~MizuEngineWindow()
{
}

void MizuEngineWindow::WindowInit()
{
	if (!glfwInit())
	{
		return;
	}

	//Set openGL version
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	//Create window and set context

	//initalise window mode and monitor
	monitor = glfwGetPrimaryMonitor();
	mode = glfwGetVideoMode(monitor);

	window = glfwCreateWindow(mode->width * 0.66, mode->height * 0.66, "Mizu Engine v1.0.0", NULL, NULL);
	//glfwSetWindowMonitor(window, monitor, 0, 0, mode->width, mode->height, mode->refreshRate);
	glfwMakeContextCurrent(window);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Couldn't load opengl" << std::endl;
		glfwTerminate();
		return;
	}

	glClearColor(0.08f, 0.12f, 0.35f, 1.0f);
}

void MizuEngineWindow::WindowUpdate()
{
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();

		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(window);
	}
}

void MizuEngineWindow::WindowTerminate()
{
	glfwTerminate();
}
