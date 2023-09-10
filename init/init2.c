#include "../push_swap.h"

char **multi_str(int ac, char **av)
{
    char *str;
    char **to_return;
    int i;

    i = 1;
    str = malloc(sizeof(char));
    str[0] = '\0';
    while (i < ac)
    {
        str = fstrjoin(str, " ");
        str = fstrjoin(str, av[i]);
        i++;
    }
    to_return = fsplit(str, ' ');
    free(str);
    return(to_return);
} 

t_stack *multi_arg_init(int ac, char **av)
{
    t_stack *stacks;
    char **splitted;
    int len;
    int i;
    
    i = 0;
    stacks = NULL;
    splitted = multi_str(ac, av);
    len = flen2d(splitted);
    allocate_stacks(&stacks, len);
    while (splitted[i])
    {
        stacks->stacka[i] = fatoi(splitted[len - i - 1]);
        free (splitted[len - 1 - i]);
        stacks->topa++;
        i++;
    }
    free(splitted);
    return (stacks);
}