#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_all - ..
 *Return: 0
 *
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char c_arg;
	int i_arg;
	float f_arg;
	char *s_arg;
	int format_index = 0;

	va_start(args, format);

	while (format[format_index])
	{
		switch (format[format_index])
		{
		case 'c':
			c_arg = va_arg(args, int);
			printf("%c", c_arg);
			break;
		case 'i':
			i_arg = va_arg(args, int);
			printf("%d", i_arg);
			break;
		case 'f':
			f_arg = va_arg(args, double);
			printf("%f", f_arg);
			break;
		case 's':
			s_arg = va_arg(args, char*);
			if (s_arg == NULL)
				printf("(nil)");
			else
				printf("%s", s_arg);
			break;
		}

		if (format[format_index + 1] != '\0' && (format[format_index] == 'c' || format[format_index] == 'i' || format[format_index] == 'f' || format[format_index] == 's'))
			printf(", ");

		format_index++;
	}

	printf("\n");
	va_end(args);
}
