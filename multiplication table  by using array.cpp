#include<stdio.h>
int main()
{ int mul[10];
  int *ptr=&mul[0];
   printf(" enter the num whose table u wnat\n");
    scanf("%d",&mul[0]);
   for (int i=1;i<=10;i++)
     printf("  %d X %d is :%d\n",ptr,i,mul[i]);
   return 0;
  }
