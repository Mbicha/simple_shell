#include <stdio.h>

/**
* Main - determines whether a number is divisible by 2
* @num - is the input thats to be divided.
* Return 0
**/
int main(void)
{
	int num;
<<<<<<< HEAD

	printf("Enter your number: \n");
	scanf("%d",&num);

=======
	
	printf("Enter your number: \n");
	scanf("%d num);
	
>>>>>>> ec41f6c4908ce39be1c69311c2c2400bd585d0ba
	int rem = num%2;

		if (rem == 0);
		{
<<<<<<< HEAD
			printf(" % d is divisible by 2\n",num);
		}
		{
			printf(" % d is the remainder \n",rem);
=======
			printf("%d is divisible by 2\n", num);
		}
		{
			printf("%d is the remainder \n", rem);
>>>>>>> ec41f6c4908ce39be1c69311c2c2400bd585d0ba
		}
		return (0);
}
