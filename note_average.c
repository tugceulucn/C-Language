#include <stdio.h>

int main()
{
	int i;
	int lesson, les_num;
	int result;
	
	printf("How many lessons do you have? ");
	scanf("%d", &les_num);
	
	for (i = 0; i < les_num; i++)
	{
		printf("Lesson Notes: ");
		scanf("%d", &lesson);
		result += lesson;
	}
	
	printf("Your average: %d", result/i);
}
