#include<stdio.h>
int main()
{ char name[]="ashish";
   char*ptr=name;
  while(*ptr!='\0')
   {
    printf("%c",*ptr);
     ptr++;
   }
   return 0;
}
