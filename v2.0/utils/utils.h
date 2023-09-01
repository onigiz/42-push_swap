#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>

int		fstrlen(char *s);
char	*fstrjoin(char *str1, char *str2);
int		wcounter(const char *str, const char c);
char	*fsubstr(const char *str, unsigned int start, unsigned int end);
char	**fsplit(const char *str, char c);
void    fprint(char *str);

#endif