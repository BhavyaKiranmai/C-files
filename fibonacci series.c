/*Wrie a C program to print fibonacci series upto given numbers*/
#include<stdio.h>
int main()
{
	int a=1,b=1,i,c,n;
	printf("Enter any positive integer");
	scanf("%d",&n);
	printf("%d %d",a,b);
	for(i=2;i<=n;i++);
	{
		c=a+b;
		a=b;
		b=c;
		printf("  %d",c);
	}
}