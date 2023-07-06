#include <stdio.h>

/**
 * _sqrt_recursive - Recursive helper function to calculate square root
 * @n: The number for which the square root is to be calculated
 * @guess: Current guess for the square root
 *
 * Return: Square root of n, or -1 if no natural square root exists
 */
int _sqrt_recursive(int n, int guess)
{
	/* Base case: If the guess squared is equal to n, return the guess */
	if (guess * guess == n)
		return (guess);

	/*
	 * Base case: If the guess squared is greater than n, no natural square root
	 * exists, so return -1
	 */
	if (guess * guess > n)
		return (-1);

	/*
	 * Recursive call: Increment the guess and recursively call the function
	 * with the updated guess value
	 */
	return (_sqrt_recursive(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number for which the square root is to be calculated
 *
 * Return: Square root of n, or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
	/* Call the recursive helper function with an initial guess of 0 */
	return (_sqrt_recursive(n, 0));
}
