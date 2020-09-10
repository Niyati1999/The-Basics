#include<stdio.h>
#include<conio.h>

void main()
{
      //	*/
	char c;
	clrscr();

	printf("enter any character = ");
	scanf("%c",&c);
	if(c >= 65 && c <= 90)
	{
		printf("it is uppercase = %c \n",c);
	}
	else
	{
		printf("it is not an uppercase !!");
	}

	int m,n;
       //	clrscr();
       /*	printf("enter marks for both the sub = ");
	scanf("%d %d",&m,&n);
	if(m >= 35 && n >=35)
	{
		printf("pass\n");
	}
	else
	{
		printf("Fail\n");
	}
	getch();
}