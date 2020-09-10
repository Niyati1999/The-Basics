#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("Enter 3 values for angle of a triangle:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c == 180)
	{
		if(a<90 && b<90 && c<90)
		{
			printf("Acute angled triangle\n");
		}
		else if(a == 90 || b == 90 || c == 90)
		{
			printf("Right angled triangle\n");
		}
		else
		{
			printf("Obtuse angled triangle\n");
		}
	}
	else
	{
		printf("not a triangle!!\n");
	}
	getch();
}


