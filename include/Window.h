#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Window {
public:
	static GLFWwindow* window;
	static int initialize(int width, int height, const char* title);
	static void terminate();

	static bool isShouldClose();
	static void setShouldClose(bool flag);
	static void swapBuffers();
};