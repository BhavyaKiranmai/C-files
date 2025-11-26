/*Write a C program to verify the given matrix is lower triangular or not*/
#include<stdio.h>
int main()
{
	int lt[3][3],i,j,flag=1;
	printf("\n Enter the elements of matrix ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&lt[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i<j&& lt[i][j]!=0 || (i<=j)&&lt[i][j]!=0))
			{
				flag==0;
				break;
			}
		}
	}
	if(flag==1)
	printf("\n The given matrix is lower triangular matrix");
	else
	printf("\n The given matrix is not a lower triangular matrix");
}