#include<stdio.h>
 void main()
 {
 	int num,i;
 	scanf("%d",&num);
 	for(i=1;i<=num/2;i++)
 	{
 		if(num%i==0)
 		printf("%d is prime",num);
 		else 
 		printf("%d is not prime",num);
	 }
	 
	 
 }
