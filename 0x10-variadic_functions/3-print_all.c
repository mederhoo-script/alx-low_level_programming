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
	char *str, c;

	va_start(args, format);
	while (format && format[i])
	{
		c = format[i++];
		if (c == 'c')
			printf("%c", va_arg(args, int));
		else if (c == 'i')
			printf("%d", va_arg(args, int));
		else if (c == 'f')
			printf("%f", va_arg(args, double));
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
