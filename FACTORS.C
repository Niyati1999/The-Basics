#include<stdio.h>
#include<conio.h>

void main()
{
	int i,c=0,n;
	clrscr();
	printf("Enter a number to find factors of :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n % i == 0)
		{
			printf("%d\n",i);
			c = c+1;
		}
	}
	printf("Total Factors = %d",c);
	getch();
}