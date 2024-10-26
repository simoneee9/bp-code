#include <log.hpp>

Log::Log( std::ostream& ostream ) : _ostream( ostream ) {}

void Log::notice( const std::string& str )
{
    _ostream << "\e[38;5;111mnotice \e[0m~ " << str << '\n';
}

void Log::warning( const std::string& str )
{
    _ostream << "\e[38;5;208m! warning \e[0m~ " << str << '\n';
}

void Log::error( const std::string& str )
{
    _ostream << "\e[38;5;160m[!] error \e[0m~ " << str << '\n';
}

void Log::errorCallback( int error, const char* description )
{
    printf( "GLFW ERROR %d: %s\n", error, description );
}
