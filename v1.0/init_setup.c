#include "push_swap.h"

//Stack için başlangıçta yer allocate ediliyor
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

//Bölünecek verinin total uzunluğu
int	split_len(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	return (i);
}

//argumanı böldü(split ile), stack pointerı oluşturdu, stack a içine
//sayıları initalize etti. split'in oluşturduğu temp. alanları freeledi.
t_stack	*split_and_check(char **av)
{
	t_stack	*stacks;
	char	**split;
	int		i;
	int		slen;

	stacks = NULL;
	if (av[1][0] == '\0' || av[1][0] == ' ')
		error_handle(stacks);
	split = ft_split(av[1], ' ');
	slen = split_len(split);
	i = 0;
	split_init_stacks(&stacks, slen);
	while (split[i])
	{
		stacks->topa++;
		stacks->stacka[i] = ft_atol_st(split[slen - i - 1], stacks);
		i++;
	}
	while (i >= 0)
		free(split[i--]);
	free(split);
	return (stacks);
}

