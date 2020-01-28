#ifndef GAME_H
#define GAME_H

#include <Debug.h>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include <SFML/Window.hpp>
#include <string>
#include <SFML/OpenGL.hpp>
#include <fstream>

#include <Vector3.h>
#include <Matrix3.h>

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	sf::Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();
	void controlCube();
	std::string loadShader(std::string& t_fileLocation);


	std::string fragmentLocation{ "fragmentShader.txt" };
	std::string vertexLocation{ "vertexShader.txt" };

	sf::Clock clock;
	sf::Time elapsed;

	float rotationAngle = 0.05f;
};

#endif