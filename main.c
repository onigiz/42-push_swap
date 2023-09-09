#include "push_swap.h"
#include "stdio.h"
int main(int ac, char **av)
{
    (void) ac;
    

    char *joined = fstrjoin(av[1], av[2]);

    printf("%s\n", joined);
    
    free(joined);
}