#include "push_swap.h"

int closest_position_stacka(t_stack *stacks, int now)
{
    int c;//counter
    int index;//now'a en yakın, now'dan büyük, sayının indexi
    long temp;//now'a en yakın, now'dan büyük sayı

    c = 0;
    index = 0;
    temp = LONG_MAX;//long olmasının sebebi çok büyük sayılarla hesaplama yapılabilecek olması?
    while (c <= stacks->topa)
    {
        if ((stacks->stacka[c] > now) && (stacks->stacka[c] < temp))
        {
            temp = stacks->stacka[c];
            index = c;
        }
        c++;
    }
    return(index);
}

int max_position_stacka(t_stack *stacks)
{
    int c;
    int index;
    int max;

    c = 0;
    index = 0;
    max = stacks->stacka[c];
    while (c <= stacks->topa)
    {
        if (max < stacks->stacka[c])
        {
            max = stacks->stacka[c];
            index = c;
        }
        c++;
    }
    return(index);
}

int min_position_stacka(t_stack *stacks)
{
    int c;
    int index;
    int min;

    c = 0;
    index = 0;
    min = stacks->stacka[c];
    while (c <= stacks->topa)
    {
        if (min >= stacks->stacka[c])
        {
            min = stacks->stacka[c];
            index = c;
        }
        c++;
    }
    return (index);
}