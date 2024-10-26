#include "renderer.hpp"

Renderer::Renderer( Log& log ) : _log( log ) {}

Renderer::~Renderer() {}

bool Renderer::draw() { return true; }
