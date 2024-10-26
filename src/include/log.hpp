#pragma once

#include <ostream>
#include <string>

struct Log
{
    Log( std::ostream& ostream );
    ~Log() = default;

    void notice( const std::string& str );
    void warning( const std::string& str );
    void error( const std::string& str );

    static void errorCallback( int error, const char* description );

  private:
    std::ostream& _ostream;
};
