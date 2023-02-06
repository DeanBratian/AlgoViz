#include <SFML/Graphics.hpp>


    class AlgoViz {

    public:
        sf::RenderWindow * window;
        sf::CircleShape shapec; 
        sf::RectangleShape shaper;

        AlgoViz() {

            Init();
        
        }

        void Init() {

            window = new sf::RenderWindow(sf::VideoMode(800, 600), "Sara Para!");

            shapec = sf::CircleShape(100.f);
            shaper = sf::RectangleShape(sf::Vector2f(100.f, 100.f));

            shaper.setFillColor(sf::Color::Green);
            shaper.setPosition(sf::Vector2f(100.f ,100.f));
            shapec.setFillColor(sf::Color::Red); 


        }

    };
