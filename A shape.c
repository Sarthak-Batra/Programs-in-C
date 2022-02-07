#include<stdio.h>
 void main()
 {
 	int i,j;
 	for(i=1;i<=5;i++)
 	{
 		for(j=1;j<=9;j++)
 		{
 			if(j==4+i || j==6-i || (j>=3 && j<=6 && i==3 ))
 			printf("*");
		    else if(j==4+i+10) || j==6-i +10|| (j>=3+10 && j<=6 +10 && i==3 ))
		    printf("*");
		    else
		    printf(" ");
		 }
		 printf("\n");
		
	 }
 }
