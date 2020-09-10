#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,n3,max;
	clrscr();
	printf("Enter 3 numbers :\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
	printf("max = %d\n",max);
	getch();
}