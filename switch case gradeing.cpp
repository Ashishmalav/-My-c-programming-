#include<stdio.h>
#include<conio.h>
 int main()
 {
 	int grade;
 	printf("enter your rating\n");
 	scanf("%d",&grade);
 	
 	 switch(grade)
 	 {
	 case (91-100):
 	  printf(" your gradeing is :- A\n");
 	  break;
 	 
 	 case (81-90): 	 
	  printf(" your gradeing is :- B \n");
	   break;
	   
	 case (71-80):
 	  printf(" your gradeing is :- C\n");
 	  break;
 	  
 	  case (61-70):
 	  printf(" your gradeing is :- D\n");
 	  break;
 	  
 	  case (51-60):
 	  printf(" your gradeing is :- E\n");
 	  break;
	  
	  default:
	  printf(" you are fail");
       
      }
	  return 0;
 }
