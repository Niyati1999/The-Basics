#include<stdio.h>
#include<conio.h>

void main()
{
	int n,o=0,e=0,r;
	clrscr();
	printf("Enter the value to find odd and even digits:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==0)
		{
			e=e+1;
		}
		else
		{
			o=o+1;
		}
		n=n/10;
	}
	printf("Number of even digits: %d\n",e);
	printf("Number of odd digits: %d\n",o);
	getch();
}
