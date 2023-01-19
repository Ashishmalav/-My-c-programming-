#include<stdio.h>
#include<conio.h>
 int main()
{ int i=1, n,sum=0;
  printf("enter the value of n\n");
  scanf("%d",&n);
  while(i<=10)
     
    {printf(" %d x %d = %d\n",n,i,n*i);
    sum=sum +(n*i);
      i++;
	}
	printf("sum of ur table is %d\n",sum);
	return 0;
 }
