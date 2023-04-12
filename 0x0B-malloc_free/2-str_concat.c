#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the newly allocated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
char *new_str;
unsigned int s1_len, s2_len, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

s1_len = 0;
while (s1[s1_len] != '\0')
s1_len++;

s2_len = 0;
while (s2[s2_len] != '\0')
s2_len++;

new_str = malloc(sizeof(char) * (s1_len + s2_len + 1));
if (new_str == NULL)
return (NULL);

for (i = 0; i < s1_len; i++)
new_str[i] = s1[i];

for (j = 0; j < s2_len; j++)
new_str[i + j] = s2[j];

new_str[i + j] = '\0';

return (new_str);
}
