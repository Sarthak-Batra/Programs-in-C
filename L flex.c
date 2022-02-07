#include<stdio.h>

void main()
   {
   	int i,j,a,b;
 	printf("enter the height of alphabet \n");
 	scanf("%d",&a);
   	for(i=1;i<=a;i++)
       {
       	for(j=1;j<=a;j++)
       	{
       	   if(j==1 || i==a && j<=a)
       	   printf("*");
       	   else
       	   printf(" ");
	    }
	    printf("\n");
	   }  	
    }
