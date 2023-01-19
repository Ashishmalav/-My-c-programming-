#include<stdio.h>
 int main()
 { int student=3;
   int subject=5;
   int marks[3][5];
    for(int i=0;i<3;i++)
    {   
	  for(int j=0;j<5;j++) 
	        { 
              printf(" enter the value of student %d marks in subject%d\n",i+1,j+1);
              scanf("%d",&marks[i][j]);
           }
            int sum; 
			sum=marks[i][0]+marks[i][1]+marks[i][2]+marks[i][3]+marks[i][4];
            printf("the total of student%d in all subject is%d\n",i+1,sum(i,5));
		 
           
    }
	
 return 0;
}

