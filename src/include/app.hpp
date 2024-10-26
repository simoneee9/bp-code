#pragma once

#include <GLFW/glfw3.h>

class App
{
public:
    App();
    App(const App& other) = delete;
    ~App();

    bool run();

private:
    GLFWwindow* _window;
    
    bool initGLEW();
    bool initGLFW();

};
