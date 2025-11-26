/*Write a C program to find distance travelled by an object*/
#include<stdio.h>
int main()
{
	float dis,vel,acc,time;
	printf("Enter velocity, acceleration,time");
	scanf("%f %f %f ,&vel,&acc, &time");
	dis=(vel*time)+(acc*time*time)/2.0;
	printf(" distance travelled is %f\n",dis);
}