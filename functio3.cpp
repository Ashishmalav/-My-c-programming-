#include<stdio.h>
int sum(int a,int b);
 int main()
 {int c,a,b;
  printf("enter the value of a \n");
  scanf("%d",&a);
  printf("enter the value of b \n");
  scanf("%d",&b);
  c= sum(a,b);
  printf("the sum of a and b is %d\n",c);
  return 0;
 }
  int sum(int a,int b)
  {int c ; 
     c=a+b;
    return c;
  }
