#include<stdio.h>
#include<conio.h>

void printmenu();  //function declaration
void main()
{
	int n=4,a,b;
	clrscr();

	//printmenu(); //function call
	//scanf("%d",&n);
	while(n!=3)
	{
		printmenu(); //function call
		scanf("%d",&n);
		if(n==1)
		{
			printf("Enter two numbers to get sum:");
			scanf("%d%d",&a,&b);
			printf("\nSum: %d\n",a+b);
		}
		else if(n==2)
		{
			printf("Enter two numbers to get the difference:");
			scanf("%d%d",&a,&b);
			printf("\nDifference: %d\n",a-b);
		}
		else if(n==3)
		{
			break;
		}
		else
		{
			printf("Invalid choice!!\n");
		}
	       //	printmenu(); // function call
	       //	scanf("%d",&n);
	}
	getch();
}
void printmenu() //IMPLEMENTATION
{
	printf("1.Addition\n2.Substraction\n3.Exit\n");
	printf("Enter your choice:\n");
}

