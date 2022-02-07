#include<stdio.h>

void main()
 {
	int num,lastdigit,orignalnum,total=0,a;
	printf("Enter a number to check whether it's handsome or not \n");
	scanf("%d",&num);
	orignalnum=num/10;
	lastdigit=a=num%10;
	while(orignalnum)
	{
		lastdigit=orignalnum%10;
    	total=total + lastdigit;
        orignalnum=orignalnum/10;
    }
    printf("%d \n",total);
    if(total==a)
    {
	  printf("%d is an handsome number",num);
    }  
    else
    printf("%d is not an handsome number",num);
}
