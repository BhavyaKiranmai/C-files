/*Write a C program to find factorial of given number using recursion*/
#include<stdio.h>
int fact(int);
int main()
{
   int n;
   printf("\n Enter any positive number");
   scanf("%d",&n);
   
   printf("Factorial is %d",fact(n));	
}
int fact(int x)
{
	if(x==1)
	  return x;
	else
	  return x*fact(x-1);
}