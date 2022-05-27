#include <stdio.h>
#include <string.h>

int main()
{
	int month;
	printf("Which month do you want? (1-12) ");
	scanf("%d", &month);
	char m[12][9] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October ", "November", "December"};
	
	dayNumberofMonth:
		switch(month)
		{
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				printf("%s. This month is 31 day.", m[month-1]);
				break;
			case 4: case 6: case 9: case 11:
				printf("%s. This month is 30 day.", m[month-1]);
				break;
			case 2:
				printf("%s. This month is 28 day.", m[month-1]);
				break;
			default:
				printf("Invalid input. Please try again.");
				goto dayNumberofMonth;
				break;
			
		}
}
