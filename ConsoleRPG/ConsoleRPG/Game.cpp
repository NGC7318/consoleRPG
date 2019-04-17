#include "Game.h"

Game::Game()
{
	choice = 0;
	playing = true;
}


Game::~Game()
{
}

//functions

void Game::initGame()
{
	std::string name;

	std::cout << "Dililah: 'What is your name stranger?'" << std::endl;
	getline(std::cin, name);
	std::cout << "Dililah: 'Thank you " << name << ", and welcome.'" << std::endl << std::endl;
	character.initliaze(name);
}

void Game::mainMenu()
{
	std::cout << "+++MAIN MENU+++" << std::endl << std::endl;
	std::cout << "0. Quit" << std::endl;
	std::cout << "1. Warp (travel)" << std::endl;
	std::cout << "2. DMSC (shop)" << std::endl;
	std::cout << "3. Talents" << std::endl;
	std::cout << "4. Rest" << std::endl;
	std::cout << "5. Stats" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl << "Choice: " << std::endl;
	std::cin >> choice;

	//switch case for menu options
	switch (choice)
	{
	case 0:
		playing = false;
		break;
	case 5:
		character.printStats();
		break;
	default:
		break;
	} //end switch
} //end func
