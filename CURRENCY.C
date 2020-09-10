#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,l,n,p,r,t,v,x,z;
	clrscr();
	printf("enter the value you want to print currency for= ");
	scanf("%d",&i);
	j = i/2000;
	printf("2000 -> %d\n",j);
	k = i%2000;
	l = k/500;
	printf("500 -> %d\n",l);
	k = k%500;
	n = k/100;
	printf("100 -> %d\n",n);
	k = k%100;
	p = k/50;
	printf("50 -> %d\n",p);
	k = k%50;
	r = k/20;
	printf("20 -> %d\n",r);
	k = k%20;
	t = k/10;
	printf("10 -> %d\n",t);
	k = k%10;
	v = k/5;
	printf("5 -> %d\n",v);
	k = k%5;
	x = k/2;
	printf("2 -> %d\n",x);
	k = k%2;
	z = k/1;
	printf("1 -> %d\n",z);
	getch();
}


