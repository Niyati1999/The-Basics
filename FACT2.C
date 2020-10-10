#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,k;
	clrscr();
	printf("Enter a value :\n");
	scanf("%d",&n);
	for(k=n;k>=1;k--)
	{
		j = 1;
		for(i=k;i>=1;i--)
		{
			j = j * i;
		}
		printf("factorial of %d = %d",k,j);
		printf("\n");
	}

		getch();
}
