#include<stdio.h>
int main()
{ int arr[]={1,4,3,5,6,7,8,9,2,10};
  int *ptr;
  ptr=&arr[0];
   printf("the address of third elemkent of array is %u\n",&arr[2]);
   printf("the address of the  ptr+2 is %u\n" ,ptr+2); 
    if( (ptr+2)==&arr[2])
       {
	   printf(" so ptr+2 and arr[2] are  pointing to the same arry ");
       }
       else
	   { printf(" so ptr+2 and arr[2] are not pointing to the same arry ");
       
	   }
       
    return 0;
}
