#include <stdio.h>

int	factorial(int n)
{
	int result = 1;
	int i;
	
	result = 1;
	for (i = n; i >= 1; i--)
		result *= i;
		
	return (result);
}

int main()
{
	printf("%d", factorial(5));
}
