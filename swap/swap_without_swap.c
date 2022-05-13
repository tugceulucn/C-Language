#include <stdio.h>

void	swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	
}
/*
int	main()
{
	int	a = 4;
	int	b = 5;
	printf("A: %d, B: %d\n", a, b);
	printf("Swap \n");
	swap(&a, &b);
	printf("A: %d, B: %d\n", a, b);
	
	
	return 0;
}
*/
