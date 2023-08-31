#include "push_swap.h"

//stack a içindeki en büyük sayı
int max_stacka(t_stack *stacks)
{
    int i;
    int max;

    i = 0;
    max = stacks->stacka[i];
    while (i <= stacks->topa)
    {
        if (max < stacks->stacka[i])
            max = stacks->stacka[i];
        i++;
    }
    return (max);
}

//stack a içindeki en küçük sayı
int min_stacka(t_stack *stacks)
{
    int i;
    int min;

    i = 0;
    min = stacks->stacka[i];
    while (i <= stacks->topa)
    {
        if (min > stacks->stacka[i])
            min = stacks->stacka[i];
        i++;
    }
    return (min);
}

int totop_stacka(t_stack *stacks, int current)
{
    int min;//a'daki min sayı
    int cost;
    int min_index;//min'in indexi
    int pivot_index;//a'da yerleştirme yapılırken baz alınacak sayının indexi

    min = min_stacka(stacks);
    min_index = min_position_stacka(stacks);
    pivot_index = next_stacka(stacks, current);
    cost = 0;
    //sınır değerler için sınır değerleri a'nın en üstüne çıkarmanın maliyeti
    if (current < min || current > max_stacka(stacks))
    {
        if (min_index >= stacks->topa / 2)//a'daki minimum değer stackin üst parçasında veya tam ortasındaysa
            cost += stacks->topa - min_index;//ra uygulanacak üste getirmek için kaç defa ????
        else    
            cost += min_index + 1;//rra uygulanacak üste getirmek için kaç defa???
    }
    else//sınır değerler arasında olduğumuzda bu kısım gerekli, current'tan büyük en küçük sayının konumu kullanılıyor(a içindeki)
    {
        if (pivot_index >= stacks->topa / 2)
            cost+= stacks->topa - pivot_index;
        else 
            cost += pivot_index + 1;
    }
    return (cost);
}

//Cost hesaplanırken currebt numberın b'nin üstüne çıkması hesabı
int totop_stackb(t_stack *stacks, int counter, int cost)
{
    if (counter >= stacks->topb / 2)
		cost += stacks->topb - counter;
	else
		cost += counter + 1;
    return (cost);
}