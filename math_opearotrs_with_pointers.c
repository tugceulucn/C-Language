#include <stdio.h>

void Addition(int *a, int *b)
{
	printf("Result: %d", *a + *b);
}

void Deletion(int *a, int *b)
{
	printf("Result: %d", *a-*b);
}

void Multiplication(int *a, int *b)
{
	printf("Result: %d", *a * *b);
}

void Division(int *a, int *b)
{
	printf("Result: %d", *a / *b);
}

void Mod(int *a, int *b)
{
	printf("Result: %d", *a % *b);
}
int	main()
{
	int a, b, c;
	printf("Enter two number: ");	
	scanf("%d%d", &a, &b);
	
	calculation:
	printf("1)Addition     2)Deletion     3)Multiplication     4)Division     5)Mod\nYour Choise: ");
	scanf("%d", &c);	
	switch(c)
	{
		case 1: Addition(&a, &b); 		  break;
		case 2: Deletion(&a, &b); 		  break;
		case 3: Multiplication(&a, &b);   break;
		case 4: Division(&a, &b); 		  break;
		case 5: Mod(&a, &b); 			  break;
		default: printf("Invalid choise. Try Again.\n"); goto calculation; break;
	}
	
	return (0);

}

