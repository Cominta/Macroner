#include "engine.h"

Engine::Engine()
{
    this->window = new sf::RenderWindow(sf::VideoMode(500, 500), "Macroner");
}

Engine::~Engine()
{

}

void Engine::updateSFML()
{
    while (this->window->pollEvent(this->sfEvent))
    {
        if (this->sfEvent.type == sf::Event::Closed)
        {
            this->window->close();
        }
    }
}

void Engine::update()
{
    this->updateSFML();   
}

void Engine::render()
{
    this->window->clear();
    this->window->display();
}

void Engine::start()
{
    while (this->window->isOpen())
    {
        this->update();
        this->render();
    }
}