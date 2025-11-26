/*Write a C program to find square root of given number*/
#include<stdio.h>
#include<math.h>
int main()
{
	int number;
	double squareroot;
	printf("Enter a number");
	scanf("%d",&number);
	squareroot=sqrt(number);
	printf("squareroot is %f",squareroot);
}