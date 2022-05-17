#include <stdio.h>

/**
* Main - determines whether a number is divisible by 2
* @num - is the input thats to be divided.
* Return 0
**/
int main(void)
{
	int num;
	
	printf("Enter your number: \n");
	scanf("%d num);
	
	int rem = num%2;
		if (rem == 0);
		{
			printf("%d is divisible by 2\n", num);
		}
		{
			printf("%d is the remainder \n", rem);
		}
		return (0);
}
