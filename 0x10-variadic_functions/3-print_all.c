#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char c;
	int integer;
	float floating;

	va_start(args, format);
	while (format && format[i])
	{
		c = format[i++];
		if (c == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (c == 'i')
		{
			integer = va_arg(args, int);
			printf("%d", integer);
		}
		else if (c == 'f')
		{
			floating = va_arg(args, double);
			printf("%f", floating);
		}
		else if (c == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
		}
		if (format[i] && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
