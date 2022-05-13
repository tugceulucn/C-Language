#include <stdio.h>

void	swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
	
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
