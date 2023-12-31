#include "push_swap.h"

//Hata kontrolü
void    error_handle(t_stack *stacks)
{
    write(2, "Error\n", 6);
    all_free(stacks);
    exit(1);
}

//Integer için sınır değer kontrolü
void	result_checker(long result, t_stack *stacks)
{
	if (result > 2147483647 || result < -2147483648)
		error_handle(stacks);
}

//Atoi, double ile return ediliyor, sınır değerleri için ve int'i 
//aldıktan sonra sayı dışı bir şey varsa diye kontrol sağlıyor
//Hata olursa stack'e yazımda sorun olacağı için stack hafızasını freeliyor. 
long	ft_atol_st(const char *str, t_stack *stacks)
{
	int		i;
	int		n;
	long	result;

	i = 0;
	n = 1;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	if (!str[i])
		error_handle(stacks);
	result = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10 + str[i++] - 48;
		result_checker(result, stacks);
	}
	if (!(str[i] <= '9' && str[i] >= '0') && str[i])
		error_handle(stacks);
	return (result * n);

	

}