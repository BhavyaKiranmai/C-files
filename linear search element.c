/*Write a C program to search an element in the list  by using a linear search*/
#include<stdio.h>
int main()
{
  int a[10],i,target,found;
  printf("\n Enter any 10 integer numbers");
  for(i=0;i<10;i++)
  {
  	scanf("%d",&a[i]);
  }
  printf("\n Enter an element to be searched");
  scanf("%d",&target);
  for(i=0;i<10;i++)
  {
  	if(target==a[i])
  	{
  		found=1;
  		break;
  	   	
	}
	
  }
  if(found==1) 
        printf("Element %d is found",target);
  else
  printf("Element %d is not found",target); 	
}