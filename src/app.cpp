#include <app.hpp>

#include <cstdio>
#include <iostream>
#include <stdexcept>

App::App( int argc, char** argv ) : _log( std::cout ), _renderer( _log )
{

    if ( !initGLFW() ) {
        throw std::runtime_error( "could not initialize glfw" );
    }

    if ( !initGLEW() ) {
        throw std::runtime_error( "could not initialize glew" );
    }
}

bool App::run()
{
    while ( !_window.shouldClose() ) {
        if ( !_renderer.draw() ) {
            return false;
        }
    }
};

bool App::initGLEW()
{
    GLenum err = glewInit();
    if ( GLEW_OK != err ) {
        printf( "ERR: %d\n", err );
        _log.error( "glewInit returned an error" );
        return false;
    }
    char glew_v[50] = { '\0' };
    sprintf( glew_v, "using glew %s", glewGetString( GLEW_VERSION ) );
    _log.notice( glew_v );

    return true;
}

bool App::initGLFW()
{
    if ( !glfwInit() ) {
        _log.error( "glfwInit returned an error" );
        return false;
    }

    glfwSetErrorCallback( _log.errorCallback );

    if ( !_window.init( 640, 480, "win" ) ) {
        _log.error( "could not create glfw window" );
        return false;
    }

    return true;
}

App::~App() { glfwTerminate(); }
