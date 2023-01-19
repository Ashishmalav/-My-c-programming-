#include<stdio.h>
#include<string.h>
 struct employee
 { int code;
   char name[];
   float perc;
 };
  int main()
 { struct employee  e1;
   struct employee *ptr;
   ptr=&e1;
   //(*ptr).code=31; //or apan ye bhi likh skate hai isli jagha ptr.->code
   //printf("%d",(*ptr).code);
   ptr->code=31;
   printf("%d",(ptr->code));
 	return 0;
  }
