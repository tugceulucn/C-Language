#include <stdio.h>

int	main()
{
	char letter;
	printf("Please enter a character: ");
	scanf("%c", &letter);
	
	(letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z') ? printf("It is a character.") : printf("It is not a character.");
	
}
