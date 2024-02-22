//Understanding for loop
#include<stdio.h>
int main(int argc, char** argv)
{
	int i,j,k;
	for (i=0;i<3;i++)
	{
		//printf("%d ",i);
		for(j=0;j<3;j++)
		{
			//printf("%d ",j);
			for(k=0;k<3;k++)
			{
			printf("%d %d ",i,k);	
			}
		}
		printf("\n");
	}
	return 0;
}