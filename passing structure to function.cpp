#include<stdio.h>
#include<string.h>
 struct employee
 { int code;
   float salary;
   char name;
 };
 void show(struct employee emp)
 { //printf("the code of the emp is :%d\n",emp.code);
   //printf("the salary of the emp is :%f\n",emp.salary);
   }
  int main()
  { struct employee e1;
    struct employee *ptr;
      ptr=&e1;
	ptr->code=12;   
    ptr->salary= 12.34;      
  
 show(e1);
   printf("the code of the emp e1is :%d\n",e1.code);
   printf("the salary of the emp e1 is :%f\n",e1.salary);
   return 0;
}
