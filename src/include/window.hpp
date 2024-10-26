#pragma once

#include <GL/glew.h>
#include <GL/glut.h>

#include <GLFW/glfw3.h>

class Window
{
  public:
    Window()                      = default;
    Window( const Window& other ) = delete;
    ~Window();

    bool init( uint32_t w, uint32_t h, const char* title );
    bool resize( uint32_t new_width, uint32_t new_height );

    bool shouldClose() const;
    void swapBuffers();

  private:
    GLFWwindow* _glfw_window;

    uint32_t _width  = 0;
    uint32_t _height = 0;
};
