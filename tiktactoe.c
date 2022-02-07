#include<stdio.h>
void main()
{
	int i,j,flag=0,x,X,y,b,O,player1=88,player2=79;   
	char a[3][3]={{95,95,95},{95,95,95},{95,95,95}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		 printf(" %c",a[i][j]);                           //empty tictaktoe
	    }
	    printf("\n");
	}
	printf("\n");
	for(b=0;b<9;b++)                                     // loop for input index
	{
		if(flag==1)
		break;
        else if(b%2==0)
	    {
	     printf("player 1 enter your position in form of i,j \n");             
	     scanf("%d %d",&x,&y);
	while(a[x][y]!=95)                                              // condition for already indexed place
          {
           printf("already used index . Re-enter your index \n");     
           scanf("%d %d",&x,&y);
          }
    if(a[x][y]==95)                                               // taking input for empty index player 1
		{                                                         
	     a[x][y]=player1;                                              
	     printf("\n");
	  for(i=0;i<3;i++)
	    {
		  for(j=0;j<3;j++)
		    {
		     printf(" %c",a[i][j]);
	        }
	      printf("\n");
	    }
	    printf("\n");
    }
   }
    
	else{
	printf("player 2 enter your position in form of i,j \n");
	scanf("%d %d",&x,&y);
	
	while(a[x][y]!=95)                                               // condition for already indexed place
       {
        printf("already used index . Re-enter your index \n");     
        scanf("%d %d",&x,&y);
        }
    if(a[x][y]==95)
	 {                                                       // taking input for empty index player 2
	  a[x][y]=player2;
	  printf("\n");
	  for(i=0;i<3;i++)
	   {
	   	 for(j=0;j<3;j++)
		 {
		  printf(" %c",a[i][j]);
	     }
	      printf("\n");
	   }
	   printf("\n");
      }
    }
	
	for(i=0;i<3;i++)                                         //conditions ---->
 	 {
	  if(a[i][0] == 88 && a[i][1] == 88 && a[i][2]== 88) 
	   {
	    printf("player 1 wins");
	    flag=1;
	    break;
       }
       if(a[i][0]==79 && a[i][1] ==79 && a[i][2]==79)
       {
	    printf("player 2 wins");
	    flag=1;
	    break;
       }

	   if(a[0][i] == 88 && a[1][i] ==88 && a[2][i]==88)
       {
	    printf("player 1 wins");
	    flag=1;
	    break;
       }
       if(a[0][i]==79 && a[1][i] ==79 && a[2][i]==79)
	   {
	    printf("player 2 wins");
	    flag=1;
	    break;
       }
	
	   if(a[0][0] == 88 && a[1][1] ==88 && a[2][2]==88)
       {
	    printf("player 1 wins");
	    flag=1;
	    break;
       }
       if(a[0][0]==79 && a[1][1] ==79 && a[2][2]==79)
	   {
	    printf("player 2 wins");
	    flag=1;
	    break;
       }
       
       if(a[0][2] == 88 && a[1][1] ==88 && a[2][0]==88)
       {
	    printf("player 1 wins");
	    flag=1;
	    break;
       }
       if(a[0][2]==79 && a[1][1] ==79 && a[2][0]==79)
	   {
	    printf("player 2 wins");
	    flag=1;
	    break;
       }
}
}
}
