#include "utils.h"

char    *fstrjoin(char *str1, char *str2)
{
    char    *joined;
    int     i;
    int     j;

    i = 0;
    j = 0;
    if (!str1 | !str2)
        return (0);
    joined = malloc(fstrlen(str1) + fstrlen(str2) + 1);
    if (!joined)
        return (0);
    while (i < fstrlen(str1))
    {
        joined[i] = str1[i];
        i++;
    }
    while (j < fstrlen(str2))
    {
        joined[i] = str2[j];
        i++;
        j++;
    }
    joined[i] = '\0';
    return (joined);
}