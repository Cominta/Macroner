#ifndef ENGINE_H
#define ENGINE_H

#include "mainState.h"
#include <stack>

class Engine 
{
    private:
        sf::RenderWindow* window;
        sf::Event sfEvent;
        std::stack<State*> stackStates;

        void updateSFML();
        void update();
        void render();

    public:
        Engine();
        ~Engine();

        void start();
};

#endif