#include<stdio.h>

void main()
{
	int a,b,total=1,i;
	printf("Enter a base number \n");
	scanf("%d",&a);
	printf("Enter power \n");
	scanf("%d",&b);
	//total=pow(a,b);
	for(i=1;i<=b;i++)
	   {
	   	total=total*a;
	   }
	printf("%d^%d = %d",a,b,total);
}
