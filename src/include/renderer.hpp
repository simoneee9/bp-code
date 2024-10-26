#pragma once

#include "log.hpp"
#include <ostream>
class Renderer
{
  public:
    Renderer() = delete;
    Renderer( Log& _log );
    ~Renderer();

    bool draw();

  private:
    Log& _log;
};
