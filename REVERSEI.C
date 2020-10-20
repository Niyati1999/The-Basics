#include<stdio.h>
#include<conio.h>

void main()
{
	int n,r,a=0,k;
	clrscr();
	printf("Enter a number to reverse it:\n");
	scanf("%d",&n);
	k = n;
	while(n!=0)
	{

		r = n % 10;
		a = (a * 10)+r;
		n = n/10;

	}
	printf("Reverse number of %d is %d:\n",k,a);
	getch();
}

