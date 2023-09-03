#include "../push_swap.h"

void	all_free(t_stack *stacks)
{
	free(stacks->stacka);
	stacks->stacka = NULL;
	free(stacks->stackb);
	stacks->stackb = NULL;
	free(stacks);
	stacks = NULL;
}

void	error(t_stack *stacks)
{
	write(2, "Error\n", 6);
	all_free(stacks);
	exit(1);
}

void	result_checker(long result, t_stack *stacks)
{
	if (result > 2147483647 || result < -2147483648)
		error(stacks);
}

long	fatol(const char *str, t_stack *stacks)
{
	int		i;
	int		n;
	long	result;

	i = 0;
	n = 1;
	if (!str[i])
		error(stacks);
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	result = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10 + str[i++] - 48;
		result_checker(result, stacks);
	}
	if (!(str[i] <= '9' && str[i] >= '0') && str[i])
		error(stacks);
	return (result * n);
}