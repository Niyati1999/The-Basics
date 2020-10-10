#include<stdio.h>
#include<conio.h>

void main()
{
	int b,e,i,p=1;
	clrscr();
	printf("Enter Base value:\n");
	scanf("%d",&b);
	printf("Enter exponent value:\n");
	scanf("%d",&e);
	for(i=1;i<=e;i++)
	{
		p = b * p;
	}
	printf("power = %d\n",p);
	getch();
}
