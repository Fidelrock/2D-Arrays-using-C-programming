//Rough work on for loop in 2d array
#include<stdio.h>
int main(int argc, char** argv)
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",a[i][k]);
			}
		}
		printf("\n");
	}
	return 0;
}