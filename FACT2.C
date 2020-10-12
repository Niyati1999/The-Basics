#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j=1,n,k;
	clrscr();
	printf("Enter a value :\n");
	scanf("%d",&n);
       /*	for(k=n;k>=1;k--)
	{
		j = 1;
		for(i=k;i>=1;i--)
		{
			j = j * i;
		}
		printf("factorial of %d = %d",k,j);
		printf("\n");
	}      */
	for(i=1;i<=n;i++)
	{

		j = j * i;
		printf("i = %d\nj = %d\n",i,j);
	}

		getch();

}
