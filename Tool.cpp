#include "Tool.h"

Tool::Tool(int x, int y , bool is_white) :
	type("")
{
	row = x;
	colum = y;
	is_white = true;
}

int Tool::getColum() {
	return colum;
}

int Tool::getRow() {
	return row;
}

bool Tool::getIsWhite() {
	return is_white;
}

string Tool::getType() {
	return type;
}

void Tool::move(int newRow, int newColum) {
	row = newRow;
	colum = newColum;
}

bool Tool::isLegitimateMove(int a, int b)
{
	return true;
}