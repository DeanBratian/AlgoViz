#include <iostream>
#include <AlgoViz/AlgoVizEngine.hpp>

int main()
{
    
    AlgoViz av;
    
    while (av.window->isOpen())
    {
        sf::Event event;

        while (av.window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                av.window->close();
        }

        av.window->clear();
        av.window->draw(av.shaper);
        av.window->display();
    }

    return 0;

}