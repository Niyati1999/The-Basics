#include<stdio.h>
#include<conio.h>

void main()
{
	int d;
	clrscr();
	printf("enter value: \n");
	scanf("%d",&d);
	switch(d)
	{
		case 1:
			printf("Sunday\n");
		 //	break;
		case 2:
			printf("Monday\n");
		   //	break;
		case 3:
			printf("Tuesday\n");
		     //	break;
		case 4:
			printf("Wednessday\n");
			break;
		case 5:
			printf("Thursday\n");
			break;
		case 6:
			printf("Friday\n");
			break;
		case 7:
			printf("Saturday\n");
			break;
		default:
			printf("invalid !\n");

	}
	getch();
}


