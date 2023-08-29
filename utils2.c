#include "push_swap.h"

void	print_stack(t_stack *stacks)
{
	int	i;

	i = stacks->topa + 1;
	while (i--)
		ft_printf("%d\n", stacks->stacka[i]);
}

//Free everything
void    all_free(t_stack *stacks)
{
    free(stacks->stacka);
    stacks->stacka = NULL;
    free(stacks->stackb);
    stacks->stackb = NULL;
    free(stacks);
    stacks = NULL;
}

//i, j'den küçük olursa 1 return eder(i alttaki, j üstteki)
int	is_sorted(t_stack *stacks)
{
	int	i;
	int	j;

	i = 0;
	while (i < stacks->topa)
	{
		j = i + 1;
		while (j <= stacks->topa)
		{
			if (stacks->stacka[i] < stacks->stacka[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}