/*Write a C program to read a character , a string and a sentence*/
#include<stdio.h>
int main()
{
	char ch;
	char word[10];
	char sentence[50];
	
	scanf("%c",&ch);
	scanf("%s\n",&word);
	scanf("%[^\n]s",sentence);
	
	printf("Character is %c\n",ch);
	printf("Word is %s\n",word);
	printf("Sentence is %s\n",sentence);
}