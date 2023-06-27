/**
 * swap_int - Swaps the values of two integers
 * @a: a pointer to an int
 * @b: a pointer to an int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int num = *a;

	*a = *b;
	*b = num;
}
