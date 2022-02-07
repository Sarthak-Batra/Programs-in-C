#include<stdio.h>

void main()
 {
	int num,lastdigit,orignalnum,total=0;
	printf("Enter a number to check whether it's armstrong or not \n");
	scanf("%d",&num);
	orignalnum=num;
	while(num)
	{
		lastdigit=num%10;
//		total=total + lastdigit*lastdigit*lastdigit;
        total=total + pow(lastdigit,3);
		num=num/10;
    }
    printf("%d \n",total);
    if(total==orignalnum)
    {
	  printf("its an armtrong number");
    }  
    else
    printf("its not an armtrong number");
}
