#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();
	for(i=2;i<=10;i+=2)
	{
		printf("%d -->Even\n",i);


	       /*	if(i%2 == 0)
		{
			printf("%d -->Even\n",i);
		}
		else
		{
			printf("%d -->Odd\n",i);
		}*/
	}
	getch();
}