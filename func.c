#include <stdio.h>

int func_swap(int* a, int* b)
{
	int t;
	t = a;
	a = b;
	b = t;
	return 0;
}
