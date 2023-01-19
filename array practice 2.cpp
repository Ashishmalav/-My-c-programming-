#include<stdio.h>
int main()
{  int n;
   printf("enter the value of n");
   scanf("%d",&n);
   printf("the table of %d is:- \n",n);
    int mul[10];
  for (int i=0;i<10;i++)
      {
      mul[i]= n*(i+1);
	  }
for (int i=0;i<10;i++)
    printf(" %d X %d =%d\n",n,i+1,mul[i]);
  return 0; 
}
