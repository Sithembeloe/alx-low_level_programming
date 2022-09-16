#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
* main - print if the number is postive, zero, or negative
=======
* main - print if the number is positive, zero, or negative
>>>>>>> 28271c2caaefbad41fcaa051d7e4a8616c1799b9
*
* Description: using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
<<<<<<< HEAD
n = rand() - RAND_MAX / 2;
  /* your code goes there */
=======
n - rand() - RAND_MAX / 2;
  /* your code goes here */
>>>>>>> 28271c2caaefbad41fcaa051d7e4a8616c1799b9
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
<<<<<<< HEAD
=======
}
return (0);
>>>>>>> 28271c2caaefbad41fcaa051d7e4a8616c1799b9
}
return (0);
