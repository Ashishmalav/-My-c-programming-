#include<stdio.h>
 int main ()
 { 
   int l;
   int m;
   printf("enter the value of l:-");
   scanf("%d",&l);
   
   printf("enter the value of m:-");
   scanf("%d",&m);
   int marks[l][m];
 	 for(int i=0;i<l;i++)
 	 {for(int j=0;j<m;j++)
 	    {printf("enter the marks of student %d in subject%d :",i+1,j+1);
 	     scanf("%d",&marks[i][j]);
     	}
	 }
	 for(int i=0;i<l;i++)
 	 {for(int j=0;j<m;j++)
 	    {
		 printf(" the marks of student %d in subject %d is :%d\n",i+1,j+1,marks[i][j]);
	    }
	 }
	 return 0;
 }
