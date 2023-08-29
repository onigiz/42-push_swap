#include "push_swap.h"

//stack a içindeki en büyük sayı
int get_max_stacka(t_stack *stacks)
{
    int index;
    int max;

    i = 0;
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

    i = 0;
    min = stacks->stacka[index];
    while (index <= stacks->topa)
    {
        if (min > stacks->stacka[index])
            min = stacks->stacka[index];
        index++;
    }
    return (min);
}


int calculate_instruction_cost(t_stack *stacks, int current)
{
    int min_val;
    int max_val;
    int min_index;
    int next_index;
    int cost;

    min_val = get_min_stacka(stacks);
    max_val = get_max_stacka(stacks);
    min_index = min_position_stacka(stacks);
    next_index = next_stacka(stacks, current);//next bigger value in stack
    cost = 0;
    if (current < min_val || current > max_val)
    {
        if (min_index >= stacks->topa /2)
            cost += stacks->topa - min_val;
        else
            cost += min_val + 1;
    }
    else
    {
		if (next_index >= stacks->topa / 2)
			cost += stacks->topa - next_index;
		else
			cost += next_index + 1;
	}
    return (cost);
}
