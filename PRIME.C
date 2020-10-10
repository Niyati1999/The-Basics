#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,c=0;
	clrscr();
	printf("Enter a number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n % i == 0)
		{
			c = c + 1;
		}
	}
       //	printf("c = %d\n",c);
	if(c == 2)
	{
		printf("%d is a prime number\n",n);

	}
	else
	{
		printf("%d is not a prime number!\n",n);

	}



	getch();
}

