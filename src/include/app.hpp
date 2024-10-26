#pragma once

#include "renderer.hpp"
#include <GL/glew.h>
#include <GL/glut.h>

#include <GLFW/glfw3.h>

#include <log.hpp>
#include <window.hpp>

class App
{
  public:
    App( int argc, char** argv );
    App( const App& other ) = delete;
    ~App();

    bool run();

  private:
    Log _log;
    Renderer _renderer;
    Window _window;

    bool initGLEW();
    bool initGLFW();
};
