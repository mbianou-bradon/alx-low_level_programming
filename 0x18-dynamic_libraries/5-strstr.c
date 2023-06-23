#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the main string
 * @needle: the substring
 * Return: where the substring is in the main string or 0
 */
char *_strstr(char *haystack, char *needle)
{
    char *h, *n;

    while (*haystack != '\0')
    {
        h = haystack;
        n = needle;

        while (*n == *haystack && *n != '\0' && *haystack != '\0')
        {
            haystack++;
            n++;
        }

        if (*n == '\0')
        {
            return h;
        }

        haystack = h + 1;
    }

    return NULL;
}
