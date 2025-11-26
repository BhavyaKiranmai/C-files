/*Write a C program to read and print the sum of two numbers*/
#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("Enter the elements of the matrix A");
	for(i=0;i<2;i++)
	{
	  for(j=0;j<2;j++)
	  {
	  	scanf("%d",&a[i][j]);
	  }
    }
	printf("\n Enter the elements of the matrix B");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
		
	}
	printf("The resultant matrix C is \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("c[%d][%d]=%d",i,j,c[i][j]);
		}
		printf("\n");
		
	}	
}