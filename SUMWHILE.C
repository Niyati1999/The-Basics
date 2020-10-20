#include<stdio.h>
#include<conio.h>


void main()

{
	int n,rem,sum=0;
	clrscr();
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	while(n>0)
	{
		rem = n%10;
		n = n/10;
		sum+=rem;
	}
	printf("sum = %d\n",sum);
	getch();
}