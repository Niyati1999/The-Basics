#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,k,sum=0;
	clrscr();
	printf("Enter a number to find the sum of factorials :");
	scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
		k = 1;
		for(j=1;j<=i;j++)
		{

			k = k * j;
		}
	    //	printf("%d",j);
	       sum = sum + k;
       }
	printf("\nSum = %d",sum);
	getch();
}