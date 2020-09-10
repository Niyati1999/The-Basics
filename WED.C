#include<stdio.h>
#include<conio.h>

void main()
{
       //	int m;
       //	int m,n;
       //	int a,b,c;
	int v,f;
	clrscr();
       /*	printf("enter marks = ");
	scanf("%d",&m);
	if(m >= 35)
	{
		printf("pass\n");
	}
	else
	{
		printf("Fail\n");
	}
	printf("Thank you!\n"); */

       /*	printf("enter two values = ");
	scanf("%d %d",&m,&n);
	if(m>n)
	{
		printf("maximum = %d\n",m);
	}
	else
	{
		printf("maximum = %d\n",n);
	}*/
      /*	printf("enter 3 values = ");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c == 180)
	{
		printf("valid triangle\n");
	}
	else
	{
		printf("Invalid triangle\n");
	}*/
	printf("enter a value = ");
	scanf("%d",&v);
	if(v < 0)
	{
		f = -v;
		printf("Absolute value of %d is %d\n",v,f);
	}
	else
	{
		printf("Absolute value of %d is %d\n",v,v);
	}
	getch();
}