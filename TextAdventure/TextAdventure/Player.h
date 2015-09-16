#pragma once
#include <iostream>
#include <conio.h>
using namespace std;

#define KEY_W 87
#define KEY_A 65
#define KEY_S 83
#define KEY_D 68

// Player States
bool playerAlive = true;
bool playerHasGold = true;
bool playerDead = true;
//bool playerHasArrow = true;
//

int currentPlayerPos;
int Move = 0;

class Player
{
public:
	void StartPos(int x, int y)
	{
		if (playerAlive)
		{
			x = 0;
			y = 0;
		}
	}

	void CurrentPos()
	{

	}

private:
	void PlayerMove()
	{
		while (playerAlive)
		{
			Move = 0;
			switch ((Move=getch()))
			{
			case KEY_W:
				cout << endl << "Up" << endl;
				break;

			case KEY_A:
				cout << endl << "Left" << endl;
				break;

			case KEY_S:
				cout << endl << "Down" << endl;
				break;

			case KEY_D:
				cout << endl << "Right" << endl;
				break;
			
			default:
				break;
			}
		}
	}
};