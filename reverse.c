/*Write a C program to print the reverse of a given number*/
#include<stdio.h>
int main()
{
	int num,rev=0,rem;
	printf("Enter any positive integer number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("The reverse of a given number is %d",rev);
}