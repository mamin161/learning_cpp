#include "util.hpp"

int my_util::math_int::add(int a, int b)
{
	return a + b;
}

void my_util::reset_int(int *a)
{
	*a = 0;
}

void my_util::mod_int(int *a, int n)
{
	*a = n;
}
