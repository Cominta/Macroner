#include "state.h"

State::State(sf::RenderWindow* window)
    : window(window) 
{

}

State::~State()
{
    delete this->window;
}

void State::update()
{

}

void State::render()
{
    
}