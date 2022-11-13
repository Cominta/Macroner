#ifndef ENGINE_H
#define ENGINE_H

#include "SFML/Graphics.hpp"

class Engine 
{
    private:
        sf::RenderWindow* window;
        sf::Event sfEvent;

        void updateSFML();
        void update();
        void render();

    public:
        Engine();
        ~Engine();

        void start();
};

#endif