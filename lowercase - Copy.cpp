#include<stdio.h>
int main()
{
	char ch;
	printf("enter a charecter\n");
	scanf("%C",&ch);
	if (ch>=97 &&ch<=122)
	{printf("the charater is a lowercase");
	}
	else 
	{printf("it is not a lowercase vallue");
    }
    return 0;
    
}