#ifndef BUTTON_H
#define BUTTON_H

#include "SFML/Graphics.hpp"

class Button 
{
    private:
        sf::RenderWindow* window;

        float x;
        float y;

        float width;
        float height;

    public:
        Button(sf::RenderWindow* window, float x, float y, float width, float height);
        ~Button();

        void setSize(int width, int height);

        void update();
        void render();
};

#endif