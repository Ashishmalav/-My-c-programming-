#include<stdio.h>
#include<conio.h>
 int main()
 {
 	 int a,b,c,d;
 	 printf("enter the value of a\n");
 	 scanf("%d",&a);
 	 printf("enter the value of b\n");
 	 scanf("%d",&b);
 	 printf("enter the value of c\n");
 	 scanf("%d",&c);
 	 printf("enter the value of d\n");
 	 scanf("%d",&d);
 	  	 if(a>b && a>c && a>d)
	  {printf(" a is the gratest number");
	  }
	 else if(b>a && b>c && b>d)
	  {printf(" b is the gratest number");
	  }
	  else if(c>a && c>b && c>d)
	  {printf(" c is the gratest number");
	  }
	  else if(d>a && d>b && d>c)
	  {printf(" d is the gratest number");
	  }
	  return 0;
}
