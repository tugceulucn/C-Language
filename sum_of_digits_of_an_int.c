#include <stdio.h>

int main()
{
	int num;
	int sum;
	printf("Input a number: ");
	scanf("%d", &num);
	while(num>0)
	{
		sum += num%10;
		num /= 10;	
	}
	printf("Sum of digits: %d", sum);
	return (0);
}
