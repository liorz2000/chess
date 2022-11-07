#pragma once
#include <iostream>
using namespace std;

class Tool
{
protected:
	string type;
	int row;
	int colum;
	int player;
public:
	Tool(int row, int col, int player = 0);
	string getType();
	int getRow();
	int getColum();
	int getPlayer();
	bool isLegitimateMove(int row, int col);
	void move(int row, int col);
};

