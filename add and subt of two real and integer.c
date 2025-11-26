/*Write a C program to perform addition and subtraction between two integer and real numbers*/
#include<stdio.h>
int main()
{
	int num1,num2,add,diff;
	float n1,n2,sum,sub;
	
	printf("Enter any two integer numbers");
	scanf("%d %d",&num1,&num2);
	
	add=num1+num2;
	diff=num1-num2;
	printf("Additionof two integer numbers are %d\n",add);
	printf("Subtraction of two integer numbers are %d\n",diff);
	
	printf("\n Enter any two real numbers");
	scanf("%f %f",&n1,&n2);
	sum=n1+n2;
	sub=n1-n2;
	printf("Addition of two real numbers are %2f\n",sum);
	printf("Subtraction of two real numbers are %2f\n",sub);
	return 0;
}