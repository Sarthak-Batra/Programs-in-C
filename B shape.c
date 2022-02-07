#include<stdio.h>
 void main()
 {
 	int i,j,a;
 	for(i=1;i<=5;i++)
 	{
 		for(j=1;j<=5;j++)
 		{
 			if(j==1 || (j==5 && i%2==0) || (i%2!=0 && j<=4 ))
 			printf("*");
 			else
 			printf(" ");
		 }
		 printf("\n");
	 }
 }
