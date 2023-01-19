#include<stdio.h>
void printarray(int*ptr,int n)
  {
   for (int i=0;i<n;i++)
     {
	   printf("the value of the element %d is %d\n",i+1,*(ptr+1));
     }
     }
     int main(){
        int j;
		int  arr[7];
     	int *poi=&arr[0];
     	printarray(arr,7);
     	for( int j=0;j<7;j++)
     	{
		printf("the valur of the array %d is",j+1);
     	scanf("%d",poi);
     	 poi++;
		 }
		 return 0;
	 }
