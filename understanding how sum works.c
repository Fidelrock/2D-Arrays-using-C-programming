//2d rough work on sum
#include<stdio.h>
int main(int argc, char** argv)
{
	int a[2][2]={{1,2},{3,4}};
	int b[2][2]={{1,2},{3,4}};
	int i,j,k,sum;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum =0;
			for(k=0;k<2;k++)
			{
				sum=sum+ a[i][k]*b[k][j];
			}
			printf("%d ",sum);
		}
		printf("\n");
	}
	return 0;
}