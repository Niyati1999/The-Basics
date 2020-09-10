#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();
	printf("Enter a ch to toggle = ");
	scanf("%c",&ch);
	if(ch >= 97 && ch <= 122)
	{
		ch = ch-32;
		printf("Toggled = %c\n",ch);
	}
	else if(ch >= 65 && ch <= 90)
	{
		ch = ch+32;
		printf("Toggled = %c\n",ch);
	}
	else
	{
		printf("Toggled = %c\n",ch);
	}
	getch();
}
