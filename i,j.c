/*Write a C program to evaluate the expression j=(i++)+(++i)*/
#include<stdio.h>
int main()
{
   int i,j,a,b;
   i=5;
   a=i++;
   b=++i;
   j=a+b;  
   printf("i=%d\n",i);
   printf("j=%d\n",j);
   return 0;	
}