#include "push_swap.h"

void	allocate_stacks(t_stack **stacks, int len)
{
	(*stacks) = malloc(sizeof(t_stack));
	if (!(*stacks))
		error_handle(*stacks);
	(*stacks)->stacka = malloc(sizeof(int) * (len));
	(*stacks)->stackb = malloc(sizeof(int) * (len));
	if (!(*stacks)->stacka || !(*stacks)->stackb)
		error_handle(*stacks);
	(*stacks)->topa = -1;
	(*stacks)->topb = -1; 
}

int flen2d(char **str)
{
    int i;

    i = 0;
    while (str[i] != NULL)
        i++;
    return(i);
}

char **splitted_str1av(char **av)
{
    char **splitted;

    splitted = fsplit(av[1], ' ');
    return(splitted);
}

/* char **splitted_str_multi(int ac, char **av)
{
    int i;
    char *str;

    i = 0;
    str = NULL;
    while (i < ac)
    {
        str = 
    }
    
} */
