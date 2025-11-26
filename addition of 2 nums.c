/*Write a C program to read and print addition of two numbers*/
#include<stdio.h>
int main()
{
	int a; int b;
	printf("Enter an integer value");
	scanf("%d",&a);
	printf("Enter an integer value");
	scanf("%d",&b);
	int sum=a+b;
	printf("sum is %d",sum);
	return 0;
}