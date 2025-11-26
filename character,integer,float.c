/*Write a C program to print a decimal,float,character*/
#include<stdio.h>
int main()
{
	char ch;
    int num;
    float f;
    printf("Enter any character");
    scanf("%c",&ch);
    printf("Enter any integer");
    scanf("%d",&num);
    printf("Enter any decimal number");
    scanf("%f",&f);
    printf("Character is %c\n Integer value is %d\n Float value is %f\n",ch,num,f);
}