#include <stdio.h>

int main()
{
	int num;
	int i;
	printf("Input the number (Table to be calculated) :\n");
	scanf("%d", &num);
	
	for (i = 0; i <= 10; i++){
			printf("%d x %d = %d\n", num, i, num*i);
	}
	
}
