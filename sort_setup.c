#include "push_swap.h"


//current'tan büyük en küçük sayının indexi return ediliyor
//pivot max long değerinden başlıyor ve giderek küçülüyor
//aranan sayının pivottan küçük olması şartı ile pivot sürekli güncelleniyor
//bu sayede sürekli daralan bir aralıkta arama yapılıyor
int next_stacka(t_stack *stacks, int current)
{
    int c;//counter
    int index;
    long temp;

    c = 0;
    index = 0;
    pivot = LONG_MAX;//long olmasının sebebi çok büyük sayılarla hesaplama yapılabilecek olması?
    while (c <= stacks->topa)
    {
        if ((stacks->stacka[c] > current) && (stacks->stacka[c] < pivot))
        {
            pivot = stacks->stacka[c];
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