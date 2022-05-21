#include <stdio.h>

int main()
{
	char let;
	printf("Please enter a character: ");
	scanf("%c", &let);
	
	if (let <= 32 || let == 127)
		printf("It is a control character.");
	else if ((let >= 65 && let <= 90) || (let >= 97 && let <= 122))
		printf("It is a alphabetic character.");
	else if ((let >= 48 && let <= 57) || (let >= 97 && let <= 122))
		printf("It is a numeric character.");
	else 
		printf("It is a special character.");
}
