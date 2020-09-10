#include<stdio.h>
#include<conio.h>

void main()
{
	int m;
	clrscr();
	printf("Enter the marks of a student = ");
	scanf("%d",&m);
	if(m >= 32 && m < 35)
	{
		m = m + (35-m);
		printf("promoted with %d marks\n",m);
	}
	else if(m >= 35)
	{
		printf("pass\n");
	}
	else
	{
		printf("Fail\n");
	}
	getch();
}

