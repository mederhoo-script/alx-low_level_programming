#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);  /*positive only*/
	else if (n == 0)
		printf("%d is zero\n", n);   /* zero zone */
	else
		printf("%d is negative\n", n);  /* negative side*/
	/* your code goes there */
	return (0);
}
