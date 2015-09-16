#pragma once


const unsigned int enemySive = 8; // size of enemy

bool enemyAlive = true;


class Enemy
{
public:
	void SetPosition(int x, int y)
	{
		if (enemyAlive)
		{
			x = 3;
			y = 4;
		}
	}
};