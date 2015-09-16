#pragma once
#include "Player.h"
#include "Enemy.h"
#include "Gold.h"
#include "Pit.h"

int numOfEnemy = 1;
int numOfPits = 4;

class Grid
{
	int GridSize;

	void SetGridSize(int x, int y)
	{
		GridSize = 4, 4;
	}
};