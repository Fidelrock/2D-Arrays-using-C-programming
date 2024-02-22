//multiplication of matrix
#include<stdio.h>
int main(int argc, char** argv)
{
	int i,j,k,n,sum=0;
	int a[50][50],b[50][50],c[50][50];
	
	printf("Enter the number elements to store in the arrays \n");
	scanf("%d",&n);
	
	printf("Now enter your first array of %d elements\n",n*n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Now enter your second array of %d elements\n",n*n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Below is the first array of %d elements\n",n*n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Below is the second array of %d elements\n",n*n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("The multiplication of the first and the second array is given below \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=0;
			for(k=0;k<n;k++)
			{
			sum=sum+ a[i][k]*b[k][j];
				
			}
			c[i][j]= sum;
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}