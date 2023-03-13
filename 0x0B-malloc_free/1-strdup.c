#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Function that returms a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 *
 * @str: char
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int r;

	i = 0;
	r = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		s[r] = str[r];
	return (s);
}
