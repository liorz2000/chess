#pragma once
#include "Tool.h"
#include "vector"
using namespace std;

class game
{
private:
	int rows_num;
	int colums_num;
	int players[2];
	vector <Tool*> tools;
public:
	int getRowsNum();
	int getColumsNum();
	int[] getPlayers();

	game(int rows_num, int colums_num);
	void add_tool(string type, int  row, int  col,  int player);
	void print_situation();
};

