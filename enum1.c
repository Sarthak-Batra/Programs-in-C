#include<stdio.h>
enum{
	odd=0,even
};
void main()
{
	int num;
	scanf("%d",&num);
	if(num%2==0)
	printf("num is %d",even);
	else
	printf("num is %d",odd);
}
