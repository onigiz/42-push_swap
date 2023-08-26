#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stacks;

	if (ac > 1)
	{
        //stack a set edilisin
		stacks = check_and_initialize(ac, av);
        //sıralama yapılsın
		start_sorting(stacks);
        //Tüm kullanılan belleği sıfırla
		free_all(stacks);
	}
	return (0);
}