#include "main.h"

/**
 * _strstr - first occurence of the substring needle in the array haystack
 * @haystack: main str to be examined
 * @needle: searched in the haystack
 * Return: return 0.
 */
char *_strstr(char *haystack, char *needle)
{
	char *str, *str1;

		while (*haystack != '\0')
		{
			str = haystack;
			str1 = needle;

			while (*haystack != '\0' && *str1 != '\0' && *haystack == *str1)
			{
				haystack++;
				str1++;
			}
			if (*str1 == '\0')
				return (str);
			haystack = str + 1;
		}
	return (0);
}
