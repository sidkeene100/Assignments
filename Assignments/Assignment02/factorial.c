#include <stdio.h>

long long factorial(int i)
{
	if(!i) { return 1; }
	return i * factorial(i - 1);
}

int main()
{
	for(int a = 1; a < 100; a++)
	{
		printf("%d - %lld\n", a, factorial(a));
	}
	return 0;
}
