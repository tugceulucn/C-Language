#include <stdio.h>

int	main()
{
	int i, j, k;
	for (i = 1; i <= 7; i++)
	{
		for (j = i+1; j <= 8; j++)
		{
			for (k = j+1; k <= 9; k++)
			{
				printf("%d%d%d", i, j, k);
				(i != 7 || j != 8 || k != 9) ? printf(" - ") : printf(".");
			}
		}
	}
}
