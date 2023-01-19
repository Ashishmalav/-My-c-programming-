#include<stdio.h>
int main()
{ char name[15];
  char *ptr= name;
  while(*ptr!='\0')
  {
  printf("enter your name");
   scanf("%c",ptr);
   ptr++;
  }
  return 0;
}
