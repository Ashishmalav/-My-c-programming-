#include<stdio.h>
#include<string.h>
int main()
 { char name[20];
   printf("enter your name sir");
   gets(name);
   char Name[10];
   strcpy(Name,name);
   printf(" now the name is %s\n",name);
   int num=Name[5];
   strlen(Name);
    printf("total no of character in your name is %d",num);
  return 0;  
}
 

