#include "push_swap.h"

void	split_init_stacks(t_stack **stacks, int len)
{
	(*stacks) = malloc(sizeof(t_stack));
	if (!(*stacks))
		error_handle((*stacks));
	(*stacks)->stacka = malloc(sizeof(int) * (len));
	(*stacks)->stackb = malloc(sizeof(int) * (len));
	if (!(*stacks)->stacka || !(*stacks)->stackb)
		error_handle((*stacks));
	(*stacks)->topa = -1;
	(*stacks)->topb = -1;
}