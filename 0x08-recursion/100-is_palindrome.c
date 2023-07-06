#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_recursive - to check if a string is a palindrome recursively
 * @s: The string to check
 * @start: Starting index
 * @end: Ending index
 *
 * Return: 1 if the substrin
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	/* Base case: If the start index exceeds the end index, it's a palindrome */
	if (start >= end)
		return (1);

	/* Check if the characters at start and end indexes are equal */
	if (s[start] != s[end])
		return (0);

	/*
	 * Recursive call: Check the substring by incrementing the start index
	 * and decrementing the end index
	 */
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
