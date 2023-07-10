#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *si;
	unsigned int i,j,len1,len2;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	si = malloc(sizeof(char) * (len1 + len2 + 1));
	if (si == NULL)
		return (NULL);

	if (s1)
	{
		while (i < len1)
		{
			si[i] = s1[i];
			i++
		}
	}

	if (s2)
	{
		while (i < (len1 + len2))
		{
			si[i] = s2[j];
			i++;
			j++;
		}
	}
	si[i] = '\0';

	return (si);
}
