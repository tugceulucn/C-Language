#include <stdio.h>

int main()
{
	int row, column;
	printf("What is the size of the matrix?\nRow:");
	scanf("%d", &row);
	printf("Column:");
	scanf("%d", &column);
	
	int arr[row][column];
	int i, j;
	i = 0;
	j = 0;
	
	//get matrix elements
	while(i < row){
		while(j < column)
		{
			scanf("%d", &arr[i][j]);
			j++;
		}
		i++;
		j = 0;
	}
	
	i = 0;
	j = 0;
	
	//print matrix
	
	printf("Your Matrix\n");
	while(i < row){
		while(j < column)
		{
			printf("%d ", arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
		j = 0;
	}
	
}
