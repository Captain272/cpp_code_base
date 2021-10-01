#include<stdio.h>
int main()
{
	int row,cols,i,j,m[3][3];
	printf("entr the no of rows u need");
	scanf("%d",&row);
	printf("entr the no of cols u need");
	scanf("%d",&cols);
	for(i=0;i<row;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("enter the element %d %d",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<cols;j++)
		{
			printf("%d ",m[i][j]);
		}
	}
	
}
