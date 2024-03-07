#include "Game.h"
#include <iostream>
using namespace std;

Game::Game() {
	
}

Game::~Game() {
	
}

void Game::Run() {
	String command = String();
	int playerX = 1;
	int playerY = 1;
	Item* item = nullptr;
	Lamp* lamp = new Lamp();
	BoxOfDonuts* box = new BoxOfDonuts();
	Cat* cat = new Cat();

	cout << "Enter a command. Press 'Q' to exit. \n Please concatenate your command into 1 word." << endl;
	command.ReadFromConsole();
	while (command.ToLower().EqualTo("q") == false) {
		if (command.ToLower().EqualTo("q") == true) {
			break;
		}
		if (command.ToLower().EqualTo("movesouth") == true) {
			cout << "You moved south" << endl;
			if (playerY != 2) {
				playerY += 1;
			}
			item = nullptr;
			if (playerX == 0 && playerY == 0) {
				item = lamp;
			}
			else if (playerX == 1 && playerY == 2) {
				item = box; 
			}
			else if (playerX == 2 && playerY == 1) {
				item = cat;
			}
			Room current(Descripts[playerX][playerY], item);
			current.Description();
		}
		else if (command.ToLower().EqualTo("movenorth") == true) {
			cout << "You moved north" << endl;
			if (playerY != 0) {
				playerY -= 1;
			}
			item = nullptr;
			if (playerX == 0 && playerY == 0) {
				item = lamp;
			}
			else if (playerX == 1 && playerY == 2) {
				item = box;
			}
			else if (playerX == 2 && playerY == 1) {
				item = cat;
			}
			Room current(Descripts[playerX][playerY], item);
			current.Description();
		}
		else if (command.ToLower().EqualTo("moveeast") == true) {
			cout << "You moved east" << endl;
			if (playerX != 2) {
				playerX += 1;
			}
			item = nullptr;
			if (playerX == 0 && playerY == 0) {
				item = lamp;
			}
			else if (playerX == 1 && playerY == 2) {
				item = box;
			}
			else if (playerX == 2 && playerY == 1) {
				item = cat;
			}
			Room current(Descripts[playerX][playerY], item);
			current.Description();
		}
		else if (command.ToLower().EqualTo("movewest") == true) {
			cout << "You moved west" << endl;
			if (playerX != 0) {
				playerX -= 1;
			}
			item = nullptr;
			if (playerX == 0 && playerY == 0) {
				item = lamp;
			}
			else if (playerX == 1 && playerY == 2) {
				item = box;
			}
			else if (playerX == 2 && playerY == 1) {
				item = cat;
			}
			Room current(Descripts[playerX][playerY], item);
			current.Description();
		}
		else if (command.ToLower().EqualTo("spell") == true) {
			cout << "Enter the name of the spell you wish to find." << endl;
			command.ReadFromConsole();
			Player player;
			player.FindSpell(command);
		}
		else if (command.ToLower().EqualTo("use") == true) {
			if (item != nullptr) {
				item->Use();
			}
		}
		cout << "Enter a command. Press 'Q' to exit." << endl;
		command.ReadFromConsole();
	}
}
