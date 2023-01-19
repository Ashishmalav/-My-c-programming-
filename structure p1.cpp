#include<stdio.h>
 struct student
 { char name[20];
   int Roll_no;
   float perct;
 };
 int main()
  {struct student S1;
  printf("name of the sudent S1:");
  gets(S1.name);
  printf("enter the roll no of student S1:");
  scanf("%d",&S1.Roll_no);
  printf("enter the marks of student S1:");
  scanf("%f",S1.perct);
  printf("name of the sudent S1:%s\n",S1.name);
  printf("enter the roll no of student S1:%d\n",S1.Roll_no);
  printf("enter the marks of student S1 :%f\n",S1.perct);
  return 0;
  }

