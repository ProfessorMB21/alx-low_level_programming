/**
 * _strlen - Returns the length of a string
 * @s: ptr to int
 * Return: len
 */

int _strlen(char *s)
{
	/* declarations */
	int len = 0;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
