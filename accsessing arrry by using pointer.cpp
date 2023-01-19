#include<stdio.h>
int main()
 { int marks[4];
    int *ptr=&marks[0];
    for(int i=0;i<4;i++){
    printf(" entrt the value  of marks of student %d is:",i+1);
    scanf("%d",ptr);
     ptr++;
	 }
	for(int i=0;i<4;i++){
    printf("  the value  of marks of student %d is :%d\n",i+1,marks[i]);
    }
    int avg;
    avg=(marks[0]+marks[1]+marks[2]+marks[3])/4;
    printf("the avg of the marks is %d %",avg);
	return 0;
}

