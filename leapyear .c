#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	printf("Enter an year \n");
	scanf("%d",&a);
    a%4==0 && a%400==0 || a%100!=0 ? printf("Its is leap year"): printf("Its not a leap year");
}

