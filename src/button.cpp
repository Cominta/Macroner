#include "button.h"

Button::Button(sf::RenderWindow* window, float x, float y, float width, float height)
    : window(window), x(x), y(y), width(width), height(height)
{

}

Button::~Button()
{
    delete this->window;
}

void Button::update()
{

}

void Button::render()
{

}