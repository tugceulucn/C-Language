#include <stdio.h>

int	reverse(int n)
{
	int result;

	result = 0;
	while(n > 0)
	{
		result *= 10;
		result += n % 10;
		n /= 10;
	}	
	return (result);
}

int	main()
{
	printf("Reverse Number: %d", reverse(123456789));
}
