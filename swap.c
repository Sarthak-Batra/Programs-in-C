#include<stdio.h>

void main()
{
	int a = 20;
	int b=30;
	int temp=0;
    temp=a;
    a=b;
    b=temp;
	printf("value of a = %d",a);
	printf("value of a = %d",b);
}
