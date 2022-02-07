#include<stdio.h>

void main()
 {
	int firstnum=0 , secondnum=0, thirdnum=0, i;
	for(i=0;i<5;i++)
	{
		if(i==1)
	{
		firstnum=1;
		}
      thirdnum = firstnum+ secondnum;
	  printf("%d ",thirdnum);
	  firstnum = secondnum;
	  secondnum = thirdnum;	  
    }
 }  

