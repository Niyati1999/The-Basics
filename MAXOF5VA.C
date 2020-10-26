#include<stdio.h>
#include<conio.h>

void main()
{
	int i,max=-32768,n;
	clrscr();
	printf("Enter 5 values:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n);
		if(n>max)
		{
			max=n;
		}
	}
	printf("max= %d\n",max);

		getch();
}

       //	for(i=1;i<=5;i++)
       //	{
	//	scanf("%d",)