#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - checking of last digit if is
 * grater than 5 or
 * is less than 5
 * is equal to zero
 * Return: 0.
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is %d ", n, last_digit);
	if (last_digit > 5)
		printf("and is greater than 5");
	else if (last_digit == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
