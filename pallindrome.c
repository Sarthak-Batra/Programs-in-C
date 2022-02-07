#include<stdio.h>
#include<conio.h>

void main()
{
	int num,lastdigit=0,reversednum=0,orignalnum;
	printf("Enter a number \n");
	scanf("%d",&num);
	orignalnum=num;
	while(num)
	{
		lastdigit=num%10;
		reversednum=reversednum*10+lastdigit;
        num=num/10;
	}
     printf("%d",reversednum);
     printf("\n");
      if(orignalnum==reversednum)
	    {
         printf("number is a pallindrome");
        }
      else
	     printf("number is not a pallindrome");
}
