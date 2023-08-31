#include "push_swap.h"


//çoklu argumanları stack elemanı alacağım zaman kullanacağım 
//memory allocation fonksiyonu
void	args_init_stacks(t_stack **stacks, int ac)
{
	(*stacks) = malloc(sizeof(t_stack));
	if (!(*stacks))
		error_handle((*stacks));
	(*stacks)->stacka = malloc(sizeof(int) * (ac));
	(*stacks)->stackb = malloc(sizeof(int) * (ac));
	if (!(*stacks)->stacka || !(*stacks)->stackb)
		error_handle((*stacks));
	(*stacks)->topa = -1;
	(*stacks)->topb = -1;
}


//çoklu argumanları stack a içine koyacağım
t_stack	*args_and_check(int ac, char **av)
{
	t_stack	*stacks;
	int		i;

	stacks = NULL;
	args_init_stacks(&stacks, ac);
	i = 0;
	while (i < ac)
	{
		stacks->topa++;
		stacks->stacka[i] = ft_atol_st(av[ac - i - 1], stacks);
		i++;
	}
	while (i >= 0)
	{
		free(av[i]);
		i--;
	}
	free(av);
	return (stacks);
}