/**
 * is_prime_recursive - Helper function to check primality recursively
 * @n: The number to check for primality
 * @divisor: Current divisor to check divisibility
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_recursive(int n, int divisor)
{
	if (n < 2 || n % divisor == 0)
		return (0);

	if (divisor * divisor > n)
		return (1);

	return (is_prime_recursive(n, divisor + 1));
}

/**
 * is_prime_number - Checks if the input integer is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
