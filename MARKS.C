#include <stdio.h>
#include <conio.h>

void main()
{
	int m,n;
	clrscr();
	printf("enter marks of two subjects = ");
	scanf("%d %d",&m,&n);
	if(m >= 35)
	{
		if(n >= 35)
		{
			printf("pass\n");
		}
		else
		{
			printf("fail\n");
		}

	}
	else
	{
		printf("fail\n");
	}
	getch();
}