#include <stdio.h>

int	main()
{
	int i;
	int num;
	printf("Pls enter a number: ");
	scanf("%d", &num);
	
	for (i = 1; i <= num/2; i++)
	{
		if (num % i == 0)
			printf("%d - ", i);
	}
	printf("%d", num);
}
