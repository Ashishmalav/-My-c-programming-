#include<stdio.h>
#include<conio.h>
 int main ()
 {int a,b,c;
  printf("enter the value of a: ");
  scanf("%d/n",&a);
  printf("enter the value of b:");
  scanf("%d/n",&b);  
  printf("enter the value of c:");
  scanf("%d/n",&c);
  if(a>b||a>c)
    { printf("so the a is the grearest no",&a);
    }
	 else if(c>a||c>b)
       {printf("so the a is the grearest no",&c);
	   }  
         else if(b>a||b>c)
         {printf("so the a is the grearest no",&b);
         }   
  
	   return(0);
 }
