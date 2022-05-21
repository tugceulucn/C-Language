#include <stdio.h>

int main()
{
	int old;
	printf("How old are you? ");
	scanf("%d", &old);
	
	if(old < 18)
		printf("You are underage.");
	else
		printf("You are an adult.");
}
