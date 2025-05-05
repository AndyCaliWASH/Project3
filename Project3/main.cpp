/*
* Name: Andres Valencia Cardenas
* SFML projects
* Date: 05/04/2025
*/

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf; 
using namespace std; 

int main(void)
{
	RenderWindow window(VideoMode({ 640, 480 }), "Game 01", sf::Style::Titlebar | sf::Style::Close);
	CircleShape shape(100.f); 

	shape.setFillColor(Color::Yellow); 

	while (window.isOpen())
	{
		while (const optional event = window.pollEvent())
		{
			if (event->is<Event::Closed>())
			{
				window.close();
			}

			if (Keyboard::isKeyPressed(Keyboard::Key::Escape))
			{
				window.close(); 
			}

			if (Keyboard::isKeyPressed(Keyboard::Key::Down))
			{
				
			}

		}
			window.clear(Color::White);
			window.draw(shape);
			window.display();
		
	}
	return 0; 
}