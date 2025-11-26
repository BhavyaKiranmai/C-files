/*Weite a C program to check whether the given number is a prime or not*/
#include<stdio.h>
int main()
{
	int num,count,i;
	printf("Enter any positive number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		   count++;
	}
	if(count==2)
	printf("The given number is a prime %d",num);
	else
	printf("The given number is not a prime %d",num);
}