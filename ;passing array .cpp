#include<stdio.h>
 void printArray(int*ptr,int n)
{ for(int i=0;i<n;i++)
  {
    printf(" the velue of element %d is %d\n", i+1,*(ptr+i));
  }
}
 int main()
{
 int arr[7];
  int *ptr=&arr[0];//={1,3,4,5,6,7,7};
 printArray(arr,7);
 for (int j=0;j<7;j++)
   { printf("the velue of the first elementis %d is\n",j+1);
      scanf("%d",&ptr);
   }
 return 0;
}
