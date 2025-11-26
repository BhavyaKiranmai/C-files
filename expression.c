/*Write a C program to evaluate a/b*c-b+a*d/3 */
#include<stdio.h>
int main()
{
	int a,b,c,d,expression;
	printf("Enter value of a");
	scanf("%d",&a);
	printf("Enter value of b");
	scanf("%d",&b);
	printf("Enter value of c");
	scanf("%d",&c);
	printf("Enter value of d");
	scanf("%d",&d);
	expression=a/b*c-b+a*d/3;
	printf("\n expression is %d",expression);
}