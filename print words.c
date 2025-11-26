/*Write a C program to print the words in a sentence*/
#include<stdio.h>
int main()
{
	char sen[100];
	int i;
	printf("\n Enter a sentence");
	scanf("%[^\n]",sen);
	
	for(i=0;sen[i]!='\0';i++)
	{
		if(sen[i]==' ')
		printf("\n");
		else
		printf("%c",sen[i]);
	}
}