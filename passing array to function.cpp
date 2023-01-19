#include<stdio.h>
void printarray(int *ptr,int n)
  { for(int i=0; i<n;i++)
   {
    printf(" the value of element %d is:%d\n ",i+1,*ptr);
    ptr++;
   }
  }
  int main()
  {int n;
  printf("enter the value of n");
  scanf("%d",&n);
  int num[n];
  int*ptr;
   ptr=&num[0];
  for(int j=0;j<n;j++)
  { printf("enter the velue of of elemet %d is:",j+1);
    scanf("%d",ptr);
    ptr++;
  }
  printarray(num,n);
  return 0;
  }
