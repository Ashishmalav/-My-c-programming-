#include<stdio.h>
 int main()
 { int i=10;
    int *ptr=&i;
    printf("the address of ptr is %u\n",ptr);
    ptr++;
    printf("the address of ptr++ is %u\n",ptr);
     ptr--;
     ptr--;
     printf("the address of ptr-- is %u\n",ptr);
    return 0;
     
 }
