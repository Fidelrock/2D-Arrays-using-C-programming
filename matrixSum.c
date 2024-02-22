#include<stdio.h>
#include <conio.h>
int main(int argc, char** argv)
{
	int i;
	int matrix1 [4][4]=[2][3];
	int matrix2 [4][4] = [3][2];
		int c[4][4];
		for(i=0;i<9;i++){
			c [i][i]= matrix1[i][i] + matrix2[i][i];
		}
		printf("%d",c[i][i]);
		
	return 0;
}