#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
	char ch;
	clrscr();
	printf("enter a character: \n");
	scanf("%c",&ch);
	ch = tolower(ch);
	switch(ch)
	{
		case 'a':
		       //	printf("vowel\n");
		       //	break;
		case 'e':
		       //	printf("vowel\n");
		       //	break;
		case 'i':
		       //	printf("vowel\n");
		       //	break;
		case 'o':
			//printf("vowel\n");
			//break;
		case 'u':
			printf("vowel\n");
			break;
		default:
			printf("not a vowel\n");
	}
	getch();
}