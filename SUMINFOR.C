#include<stdio.h>
#include<conio.h>

void main()
{
	int i,s=0;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("%d\n",i);
		s = s+i;
	}

	printf("sum is %d",s);
	getch();
}