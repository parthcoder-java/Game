#include <iostream>
#include "../lib/application.h"

int main(void) {
	if (!glfwInit()) {
		std::cout << "GLFW initialization failed" << std::endl;
	}

	glfwWindowHint(GLFW_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_VERSION_MINOR, 4);
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

	window* win = new window(800, 800, "Game");
	win->initialize_window();

	GLFWwindow* win_ptr = win->get_window();

	while (!glfwWindowShouldClose(win_ptr)) {
		glfwPollEvents();
		
	}
	delete win;
	glfwTerminate();
}