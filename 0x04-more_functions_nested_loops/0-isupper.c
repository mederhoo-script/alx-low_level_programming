/**
 * _isupper - check if c is upper or not
 *
 * @c: input
 *
 * Return: 1 if its uppercase, or 0 !if
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
