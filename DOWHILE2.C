#include<stdio.h>
#include<conio.h>

void printmenu();
void main()
{
	int n=4,a,b;
	clrscr();
	do
	{
		printmenu();
		scanf("%d",&n);
		if(n==1)
		{
			printf("Enter 2 nos.\n");
			scanf("%d%d",&a,&b);
			printf("sum= %d\n",a+b);
		}
		else if(n==2)
		{
			printf("Enter 2 nos.\n");
			scanf("%d%d",&a,&b);
			printf("Difference= %d\n",a-b);
		}
		else if(n==3)
		{
			break;
		}
		else
		{
			printf("\nInvalid choice!!\n");
		}
	}while(n!=0);
	getch();
}

void printmenu()
{
	printf("1.Addition\n2.Substraction\n3.Exit\n");
	printf("Enter your choice\n");
}


