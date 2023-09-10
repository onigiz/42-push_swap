#include "push_swap.h"
#include "stdio.h"

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

        if (ac == 2)
            stacks = one_arg_init(av);
        else if (ac > 2)
            stacks = multi_arg_init(ac, av);
        
        print_stack(stacks);
        
        free_all(stacks);
    }
        return (0); 
}