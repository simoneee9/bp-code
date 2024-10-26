
#include "window.hpp"
#include "GLFW/glfw3.h"

bool Window::init( uint32_t w, uint32_t h, const char* title )
{
    _width  = w;
    _height = h;

    glfwWindowHint( GLFW_CONTEXT_VERSION_MAJOR, 4 );
    glfwWindowHint( GLFW_CONTEXT_VERSION_MINOR, 6 );
    glfwWindowHint( GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE );

#ifndef NDEBUG
    glfwWindowHint( GLFW_OPENGL_DEBUG_CONTEXT, true );
#endif // !NDEBUG

    _glfw_window = glfwCreateWindow( w, h, title, NULL, NULL );
    if ( !_glfw_window )
        return false;

    glfwMakeContextCurrent( _glfw_window );

    return true;
}

bool Window::resize( uint32_t new_width, uint32_t new_height )
{
    // todo
}

bool Window::shouldClose() const
{
    return glfwWindowShouldClose( _glfw_window );
}

void Window::swapBuffers() { glfwSwapBuffers( _glfw_window ); }

Window::~Window() { glfwDestroyWindow( _glfw_window ); }
