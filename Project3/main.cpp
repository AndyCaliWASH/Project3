/*
* Name: Andres Valencia Cardenas
* SFML projects
* Date: 05/04/2025
*/

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main(void)
{
	sf::RenderWindow window(sf::VideoMode({ 1920, 1080 }), "Game 01");
	sf::CircleShape shape(500.f); 

	shape.setFillColor(sf::Color::Yellow); 

	while (window.isOpen())
	{
		while (const std::optional event = window.pollEvent())
		{
			if (event->is<sf::Event::Closed>())
			{
				window.close();
			}
		}
			window.clear();
			window.draw(shape);
			window.display();
		
	}
	return 0; 
}