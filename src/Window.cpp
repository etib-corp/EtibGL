/*
** EPITECH PROJECT, 2023
** Window
** File description:
** check your malloc!
*/

#include "Window.hpp"

etib::Window::Window(int width, int height, const char *title, bool fullscreen) : _width(width), _height(height), _title(title), _fullscreen(fullscreen)
{
    std::cout << "Window created" << std::endl;
    init();
}

void etib::Window::init()
{
    if (!glfwInit()) {
        std::cout << "Error: glfwInit" << std::endl;
        exit(84);
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    _window = glfwCreateWindow(_width, _height, _title, NULL, NULL);
    if (!_window) {
        std::cout << "Error: glfwCreateWindow" << std::endl;
        glfwTerminate();
        exit(84);
    }
    glfwMakeContextCurrent(_window);
    if (glewInit() != GLEW_OK) {
        std::cout << "Error: glewInit" << std::endl;
        glfwTerminate();
        exit(84);
    }
}

void etib::Window::pollEvent()
{
    glfwPollEvents();
}

void etib::Window::draw()
{
}

void etib::Window::display()
{
    std::cout << "[*] The window is displaying" << std::endl;
    glfwSwapBuffers(_window);
}

void etib::Window::close()
{
    glfwSetWindowShouldClose(_window, true);
}

int etib::Window::getWidth() const
{
    return _width;
}

int etib::Window::getHeight() const
{
    return _height;
}

const char *etib::Window::getTitle() const
{
    return _title;
}

int etib::Window::isOpened() const
{
    return glfwWindowShouldClose(_window);
}

void etib::Window::clear()
{
    glClear(GL_COLOR_BUFFER_BIT);
}

etib::Window::~Window()
{

}
