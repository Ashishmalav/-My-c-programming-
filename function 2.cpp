#include<stdio.h>
int sum(int a,int b);
 int main()
 {int c;
  c= sum(2,5);
  printf("the sum of a and b is %d\n",c);
  return 0;
 }
  int sum(int a,int b)
  {int c ; 
     c=a+b;
    return c;
  }
