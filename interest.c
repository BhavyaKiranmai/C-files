/*Write a C program to calculate simple interest and compound interest*/
#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("Enter principal amount");
	scanf("%f",&p);
	printf("\n Enter time");
	scanf("%f",&t);
	printf("\n Enter rate of interest");
	scanf("%f",&r);
	si=(p*t*r)/100.0;
	ci=p*pow((1+r/100),t)-p;
	printf("\n The simple interest is %f",si);
	printf("\n The compound interest is %f",ci);
 } 