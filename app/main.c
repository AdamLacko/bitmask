#include <stdio.h>
#include "../src/bitmask.h"

static void print_bin(unsigned n)
{
	unsigned i;
	for (i = 1 << 31; i > 0; i = i / 2)
	{
		(n & i) ? printf("1") : printf("0");
	}
	printf("\n");
}

int main()
{
	BITMASK mask = 0;
	bitmask_set(&mask, 3);
	bitmask_set(&mask, 5);
	print_bin(mask);
	return 0;
}