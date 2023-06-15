#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char sz1;
	int sz2;
	long int sz3;
	long long int sz4;
	float sz5;

	printf("Size of a char: %lu byte(s)\n", sizeof(sz1));
	printf("Size of an int: %lu byte(s)\n", sizeof(sz2));
	printf("Size of a long int: %lu byte(s)\n", sizeof(sz3));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(sz4));
	printf("Size of a float: %lu byte(s)\n", sizeof(sz5));
	return (0);
}
