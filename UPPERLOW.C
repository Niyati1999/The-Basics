#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("enter a character = ");
	scanf("%c",&ch);
	if(ch >= 'A' && ch <= 'Z')
	{
		printf("It is upperCase\n");
	}
	else if(ch >= 'a' && ch <= 'z')
	{
		printf("It is lowerCase\n");
	}
	else if(ch >= '0' && ch <= '9')
	{
		printf("It is a Number\n");
	}
	else
	{
		printf("other!!\n");
	}
	getch();
}
