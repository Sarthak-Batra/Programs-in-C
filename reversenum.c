#include<stdio.h>
#include<conio.h>

void main()
{
	int num,lastdigit;
	printf("Enter a number \n");
	scanf("%d",&num);
	while(num)
	{
		lastdigit=num%10;
		printf("%d",lastdigit);
		num=num/10;
	}
}
