#include <stdio.h>

/* Function prototype for the constructor attribute */
void pre_main_message(void) __attribute__((constructor));

/**
 * pre_main_message - Function that prints a message before main is executed.
 */
void pre_main_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
