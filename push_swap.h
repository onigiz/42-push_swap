#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "limits.h"
# include "ft_printf/ft_printf.h"

typedef struct s_stack
{
	int	*stacka;
	int	*stackb;
	int	topa;
	int	topb;
}	t_stack;

#endif