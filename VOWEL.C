#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
	char c;
	clrscr();
	printf("Enter a character = ");
	scanf("%c",&c);
	if(tolower(c) == 'a')
	{
		printf("Vowel\n");
	}
	else if(tolower(c) == 'e')
	{
		printf("Vowel\n");
	}
	else if(tolower(c) == 'i')
	{
		printf("Vowel\n");
	}
	else if(tolower(c) == 'o')
	{
		printf("Vowel\n");
	}
	else if(tolower(c) == 'u')
	{
		printf("Vowel\n");
	}
	else
	{
		printf("not a vowel!!\n");
	}
	getch();
}
