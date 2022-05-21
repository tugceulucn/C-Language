#include <stdio.h>

int	main()
{
	int n,i,j, prime;
	scanf("%d", &n);
	
	for (i = 2; i < n; i++)
	{
		prime = 0;
		for (j=2; j < i; j++)
		{
			if (i % j == 0)
				prime = 1;
		}
		if (prime == 0)
			printf("%d ", i);
	}
}
