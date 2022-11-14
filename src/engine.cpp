#include "engine.h"

Engine::Engine()
{
    this->window = new sf::RenderWindow(sf::VideoMode(500, 500), "Macroner");
    this->stackStates.push(new MainState(this->window));
}

Engine::~Engine()
{
    delete this->window;
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

    if (!this->stackStates.empty())
    {
        this->stackStates.top()->update();
    }
}

void Engine::render()
{
    this->window->clear();

    if (!this->stackStates.empty())
    {
        this->stackStates.top()->render();
    }

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