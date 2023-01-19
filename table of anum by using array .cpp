#include<stdio.h>
int main()
{ int mul[10];
  int *ptr;
   ptr=&mul[0];
   printf(" enter the num whose table u wnat\n");
    scanf("%d",ptr);
    ptr++;
   for (int i=1;i<=10;i++)
     printf("  %d X %d is :%d\n",ptr,i,mul);
   return 0;
  }
