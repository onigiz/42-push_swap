#include "push_swap.h"

//arguman -> 1 string -> char array arrayi
char	**connect_args(int ac, char **av)
{
	char	**to_return;
	char	*string;
	int		i;

	i = 1;
	string = malloc(sizeof(1));
	string[0] = '\0';
	while (i < ac)
	{
		string = ft_strjoin(string, " ");
		string = ft_strjoin(string, av[i]);
		i++;
	}
	to_return = ft_split(string, ' ');
	free(string);
	return (to_return);
}

//A stack içinde aynı sayıdan 2 tane olamaz!
void	check_duplicates(t_stack *stacks)
{
	int	i;
	int	j;

	i = 0;
	while (i < stacks->topa)
	{
		j = i + 1;
		while (j <= stacks->topa)
		{
			if (stacks->stacka[i] == stacks->stacka[j])
				error_handle(stacks);
			j++;
		}
		i++;
	}
}


t_stack	*check_and_initialize(int ac, char **av)
{
	t_stack	*stacks;
	int		new_av_len;
	char	**new_av;

	stacks = NULL;
	new_av = NULL;
	new_av_len = 0;
	if (ac < 2)
		error_handle(stacks);
	else if (ac == 2)
        //birinci argumanı böl ve a stackini başlat
		stacks = split_and_check(av);
	else if (ac > 2)
	{
        //argumanları tek string yap + o string ile yeni bir 
        //arguman arrayi oluştur + a stackini başlat
		new_av = connect_args(ac, av);
        //yeni arrayin uzunluğunu al
		new_av_len = split_len(new_av);
		stacks = args_and_check(new_av_len, new_av);
	}
	check_duplicates(stacks);
	return (stacks);
}

//Stackteki data sayısına göre hangi sıralamayı seçeceğine karar ver
void	start_sorting(t_stack *stacks)
{
    //Aynı elemanlı durumlarda hata ver, çıkış yap.
	if (is_sorted(stacks) == 1)
	{
		all_free(stacks);
		exit(1);
	}//topa + 1 sayısında sıralanacak eleman var
	else if (stacks->topa == 1)
		sa(stacks->stacka, stacks->topa);
	else if (stacks->topa == 2)
		three_sort(stacks);
	else if (stacks->topa == 3)
		four_sort(stacks);
	else if (stacks->topa == 4)
		five_sort(stacks);
	else
		big_sort(stacks);
}