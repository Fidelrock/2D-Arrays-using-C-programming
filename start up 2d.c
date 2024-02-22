// 2D Array
#include<stdio.h>
int main(int argc, char** argv)
{
	int a[50][50];
	int i,j,n;
	
	printf("Enter the number of rows and columns you want your 2D array to contain \n");
	scanf("%d",&n);
	
	printf("Now Enter the %d rows and columns \n",n);
	for(i=0;i<n;i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}