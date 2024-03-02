#include <stdio.h>
int main()
{
int rows, columns,i, j;

printf("Enter the number of rows : ");
scanf("%d", &rows);
printf("Enter the number of columns : ");
scanf("%d", &columns);

printf("\n");
/*Logic for holow rectangle*/
for (i = 1; i <= rows; i++)

{
	for (j = 1; j <= columns; j++)
	{	
    	if (i==1 || i==rows || j==1 || j==columns)
			printf("*");
		else
			printf(" ");
	}
	printf("\n");
}
return 0;
}