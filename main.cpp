#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
    RenderWindow app(VideoMode(1200, 600), "My First SFML App");

    CircleShape circle1;
    circle1.setRadius(100);
    circle1.setPosition(500,175);
    circle1.setFillColor(Color(200,200,100));

    while (app.isOpen())
    {
        Event event;
        while (app.pollEvent(event))
        {
            if (event.type == Event::Closed)
                app.close();
        }

        app.clear(Color(255,255,255));

        app.draw(circle1);

        app.display();
    }

    return EXIT_SUCCESS;
}
