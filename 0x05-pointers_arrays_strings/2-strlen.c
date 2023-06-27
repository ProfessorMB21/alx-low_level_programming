/**
 * _strlen - Returns the length of a string
 * @s: ptr to int
 * Return: len
 */

int _strlen(int *s)
{
	/* declarations */
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
