#include <stdio.h>

int main()
{
	int i;
	int j;
	printf("The Multiplication Table\n");
	
	for (i = 0; i <= 10; i++){
		printf("--- %d ---\n", i);
		for (j = 1; j <= 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i*j);
		}
	}
}
