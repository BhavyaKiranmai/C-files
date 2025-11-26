/*Write a C program to print sum of the digits of a given number*/
#include<stdio.h>
int main()
{
	int num,sum=0,rem;
	printf("Enter any positive integer number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
		
	}
	printf("the sum of the digits of a given number is %d",sum);
}