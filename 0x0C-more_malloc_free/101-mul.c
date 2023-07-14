#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_valid_number - Checks a string
 * @num: The string to be checked
 *
 * Return: 1
 */
int is_valid_number(char *num)
{
	int i = 0;

	while (num[i] != '\0')
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 * multiply - Multiplies two numbers and prints the result
 * @num1: The first number as a string
 * @num2: The second number as a string
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0;
	int i, j, k, carry, sum;
	int *result;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	result = calloc(len1 + len2, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		result[i] = carry;
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
	{
		i++;
	}

	if (i == len1 + len2)
	{
		printf("0");
	}
	else
	{
		for (k = i; k < len1 + len2; k++)
		{
			printf("%d", result[k]);
		}
	}

	printf("\n");
	free(result);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}
