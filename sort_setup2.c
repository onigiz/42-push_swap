#include "push_swap.h"

//stack a içindeki en büyük sayı
int get_max_stacka(t_stack *stacks)
{
    int index;
    int max;

    index = 0;
    max = stacks->stacka[index];
    while (index <= stacks->topa)
    {
        if (max < stacks->stacka[index])
            max = stacks->stacka[index];
        index++;
    }
    return (max);
}

//stack a içindeki en küçük sayı
int get_min_stacka(t_stack *stacks)
{
    int index;
    int min;

    index = 0;
    min = stacks->stacka[index];
    while (index <= stacks->topa)
    {
        if (min > stacks->stacka[index])
            min = stacks->stacka[index];
        index++;
    }
    return (min);
}

int stack_costb(t_stack *stacks, int temp_index, long temp_cost)
{
    if (stacks->topb / 2 >= temp_index)
        temp_cost += temp_index + 1;
    else if (stacks->topb < temp_index)
        temp_cost += stacks->topb - temp_index;
    return(temp_cost);
}

int stack_costa(t_stack *stacks, int a_pivot, long temp_cost)
{
    if (stacks->topb / 2 >= a_pivot)
        temp_cost += a_pivot+ 1;
    else if (stacks->topb < a_pivot)
        temp_cost += stacks->topb - a_pivot;
    return(temp_cost);
}

//B stackinde en az maliyeti olan sayının indexini return ediyor
int find_cheapest(t_stack *stacks)
{
    int     index;
    long    cost;
    long    temp_cost;
    int     temp_index;
    //a'da koyulacak yeri belirleyeceğiz
    int     a_pivot;

    a_pivot = 0;
    temp_index = 0;
    temp_cost = 0;
    cost = LONG_MAX;
    while (temp_index <= stacks->topb)
    {
        //b'nin en üstüne çıkış
        temp_cost = stack_costb(stacks, temp_index, temp_cost);
        //a'da doğru yere koymak için a üzerinde ra/rra işlemi yapılmalı
        a_pivot = next_stacka(stacks, stacks->stackb[temp_index]);
        temp_cost = stack_costa(stacks, a_pivot, temp_cost);
        //a'ya push
        temp_cost++;
        if (cost > temp_cost)
        {
            index = temp_index;
            cost = temp_cost;
        }
        temp_cost = 0;
        a_pivot = 0;
        temp_index++;
    }
    return(index);
}
