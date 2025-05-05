#pragma once

// Class that acts as the game engine 
//Wrapper class


class Game
{
public:

	//Constructors
	Game(); 
	virtual ~Game(); 

private: 

	void update(); 
	void render(); 

};

