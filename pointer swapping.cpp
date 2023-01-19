#include<stdio.h>
void swap( int*a,int*b);
 int main()
 { int x=3,y=4;
   printf("the valuee of x nd y with out swapping is %d and%d/n",x,y);
   swap(&x,&y);
   printf("the value of x nd y with swappping is %d and %d\n", x, y);
   return 0;
 }
   void swap(int *a,int*b)
   { int temp;
     temp=*a;
     *a=*b;
     *b= temp;
    }
