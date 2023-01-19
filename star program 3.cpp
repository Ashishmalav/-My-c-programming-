#include<stdio.h>
 int main()
 { int n;
  printf("enter the num of row n \n");
  scanf("%d",&n);
   for(int i=1;i<=n;i++)
    { for(int j=n-1;j>=i;j--)
    {
      printf("*");
    }
     printf("\n");
 }
     return 0;
}
