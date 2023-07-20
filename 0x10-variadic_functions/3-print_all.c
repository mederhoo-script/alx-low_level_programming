#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed
 *
 * Description: This function takes a variable
 * number of arguments
  * character in the format string is ignored.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char c;

	va_start(args, format);

	while (format && format[i])
	{
		c = format[i];

		switch (c)
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;

		case 'i':
			printf("%d", va_arg(args, int));
			break;

		case 'f':
			printf("%f", va_arg(args, double));
			break;

		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;

		default:
			break;
		}

		if ((format[i + 1] != '\0') && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");

		i++;
	}

	va_end(args);
	printf("\n");
}
