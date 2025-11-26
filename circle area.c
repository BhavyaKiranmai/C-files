/*Write a C program to find the area of circle*/
#include<stdio.h>
//#define PI=3.14
int main()
{
	const float PI=3.14;
	float r,a;
	printf("Enter radius of the circle");
	scanf("%f",&r);
	a = PI*r*r;
	printf("Area of the circle=%2f\n",a);
	return 0;
}