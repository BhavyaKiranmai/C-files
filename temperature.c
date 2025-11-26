/* Write a C program to convert fahrenheit to celsius and celsius to fahrenheit*/
#include<stdio.h>
int main()
{
	float fah,cel;
	printf("Enter fahrenheit");
	scanf("%f",&fah);
	cel=(fah-32.0)*(5.0/9.0);
	printf("Fahrenheit to celsius is %f\n",cel);
	printf("\n Enter celsius");
	scanf("%f",&cel);
	fah=cel*(9.0/5.0)+32.0;
	printf("celsius to fahrenheit is %f",fah);
}