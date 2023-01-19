#include<stdio.h>
int main()
{ int n,k,i,j;
     printf("enter the no of row\n");
   scanf("%d",&n);
   for( i=1;i<=n;i++)
    { for (j=1;j<=i;j++)
	   {int k; 
	   k=(i+j)%2;
	   if (j==i||k==0)
	    { printf("1");
		}
		else
		{printf("0");
	    }
	   }
	  printf("\n");
    }
  return 0;
  
}
