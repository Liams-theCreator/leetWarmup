#include "lib.h"

int main(void)
{
	int x;
	int y;
	int result;

	x = 1;
	y = 5;
	result = add(x, y);
	printf("%d\n", result);
	return 0;
}
