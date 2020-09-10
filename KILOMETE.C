#include<stdio.h>
#include<conio.h>

void main()
{
	int m,k,n;
	clrscr();
	printf("enter the value in meters = ");
	scanf("%d",&m);
	k = m/1000;
	n = m%1000;
	printf("kilometers = %d\n meters = %d\n",k,n);
	getch();
}
