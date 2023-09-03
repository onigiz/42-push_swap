#include "push_swap.h"

#include <stdio.h>
int main(int ac, char **av)
{
    (void) ac;
    
    t_stack *stacks;
    stacks = split_and_check(av);
    printf("topa: %d\ntopb: %d\n", stacks->topa, stacks->topb);
    int i = 0;
    while (stacks->stacka[i])
    {
        printf("%d\n", stacks->stacka[i]);
        i++;
    }
    all_free(stacks);
}