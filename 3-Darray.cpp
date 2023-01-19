#include<stdio.h>
 int main()
 { int dark[2][3][4];
      for( int i=0; i<2;i++)
     { 
	    for( int j=0; j<3;j++)
       {
	     for( int k=0; k<4;k++)
          {
		    printf(" enter the value of dark[%d][%d][%d] is %d",i,j,k);
		     scanf("%d",dark[i][j][k]);
		     
	      }
	   } 
     }
 
      for( int i=0; i<2;i++)
     { 
	    for( int j=0; j<3;j++)
       {
	     for( int k=0; k<4;k++)
          {
		    printf(" the value of dark[%d][%d[%d] is %d\n",i,j,k,&dark[i][j][k]);
	      }
	   } 
     }
    return 0;
  }
