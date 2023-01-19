#include<stdio.h>
 int main()
 {int a=34;
   int *b=&a;
   printf(" the address of a is %u\n",&a);
   printf(" the address of a is %u\n",b);
   printf(" the vlue of a is %d\n",*b);
   return 0;
 }
