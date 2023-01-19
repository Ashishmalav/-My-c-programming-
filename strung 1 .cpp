#include<stdio.h>
 int main()
 { char name[15];
   printf("enter your name ");
  // scanf("%s",&name);
   gets(name);
   puts(name);
    printf(" your name is :%s",name);
   return 0;
 }
