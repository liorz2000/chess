#pragma once
#include <iostream>
using namespace std;

class Tool
{
private:
	string type;
	int row;
	int colum;
	bool is_white;
public:
	Tool(int row, int col, bool is_white);
	string getType();
	int getRow();
	int getColum();
	bool getIsWhite();
	virtual bool isLegitimateMove(int row, int col);
	void move(int row, int col);
};

