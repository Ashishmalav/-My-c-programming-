#include<stdio.h>
 int factorial(int N);
  int main()
  { int a ;
    printf("enter the value of a is \n");
    scanf("%d",&a); 
    printf("the value of factorial of %d is %d",a, factorial(N));
    return 0;
    
  }
  int factorial(int N)
  {if(N==1||N==0)
    { return 1;
 }
 else{ return  (N)* factorial(N-1);
 }
  }
