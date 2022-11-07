#include "King.h"
#include <cstdlib>

bool King::isLegitimateMove(int a, int b) {
	return (abs(a - row) <= 1) and (abs(b - colum) <= 1);
}
