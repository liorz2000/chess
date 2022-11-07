#include "Tool.h"

Tool::Tool(int x, int y , int p) :
	type("")
{
	row = x;
	colum = y;
	player = p;
}

int Tool::getColum() {
	return colum;
}

int Tool::getRow() {
	return row;
}

int Tool::getPlayer() {
	return player;
}

string Tool::getType() {
	return type;
}

void Tool::move(int newRow, int newColum) {
	row = newRow;
	colum = newColum;
}