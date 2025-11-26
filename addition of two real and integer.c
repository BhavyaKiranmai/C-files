/*Write a C program to perform addition of two integer numbers and two real numbers*/
#include<stdio.h>
int main()
{
	int num1,num2,add,diff;
	float n1,n2,sum,difference;
	printf("Enter an two integer numbers");
	scanf("%d",&num1,&num2);
	add=num1+num2;
	diff=num1-num2;
	printf("addition of two integer numbers are %d\n",add);
	printf("subtraction of two integer numbers are %d\n",diff);
	
	printf("\n Enter any two real numbers");
	sum=n1+n2;
	difference=n1-n2;
	printf("addition of two real numbers are %f \n",sum);
	printf("subtraction of two real numbers are %f \n",difference);
}