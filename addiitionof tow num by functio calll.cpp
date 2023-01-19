#include<stdio.h>
 int sum(int x, int y);
  int main()
  { int x,y;
   printf("enter the value of x :\n");
    scanf("%d",&x);
      printf("enter the value of y:\n");
    scanf("%d",&y);
   printf("the sum of a nd b is %d\n",sum(x,y));
    return 0;
 }
      int sum(int x,int y)
      { int result ;
	   result=x+y; 
         return  result;
	  }
