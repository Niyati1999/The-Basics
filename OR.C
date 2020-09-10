#include<stdio.h>
#include<conio.h>

void main()
{
	int m,n;
	clrscr();
	printf("enter marks = ");
	scanf("%d %d",&m,&n);
	if(m < 35 || n < 35)
	{
		printf("fail\n");
	}
	else
	{
		printf("pass\n");
	}
	getch();
}