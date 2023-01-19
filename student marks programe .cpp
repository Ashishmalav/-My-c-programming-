#include<stdio.h>
 int main ()
 { int stu[3];
    for(int i=0; i<3;i++)
  { 
	int marks[5];
	int *ptr;
	 ptr=&marks[0];
	 for(int j=0; j<5;j++) 
	 {
	 printf("enter the marks of student %d in subject %d \n",i+1,j+1);
	 scanf("%d",ptr);
	 ptr++;
     }
  } 
    for(int i=0; i<3;i++)
  { 
	int marks[5];
	int *ptr;
	ptr=&marks[0];
	 for(int j=0;j<5;j++) 
	 {
	 printf("the marks of student %d in subject %d is :%d\n",i+1,j+1,marks[0]);
	 ptr++;
     } 
  }
   return 0;
 }
