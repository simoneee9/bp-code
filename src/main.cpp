#include <app.hpp>

int main( int argc, char** argv )
{
    App a( argc, argv );

    if ( a.run() )
        return 0;

    return 1;
}
