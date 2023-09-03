#include "push_swap.h"
#include <stdio.h>

void	print_stack(t_stack *stacks)
{
	int	i;

	i = stacks->topa + 1;
	while (i--)
		printf("%d\n", stacks->stacka[i]);
}

int main(int ac, char **av)
{

    if (ac > 1)
    {
        t_stack *stacks;
        
        stacks = initialize_stacks(ac, av);
        
        print_stack(stacks);
        all_free(stacks);
    }
    return (0);
}