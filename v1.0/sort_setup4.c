#include "push_swap.h"

//En az maliyetli sayıyı hesapla
int choose_most_efficient(t_stack *stacks)
{
    int counter;
    int index;
    int cost;
    long best;

    counter = 0;
    cost = 0;
    index = 0;
    best = LONG_MAX;//başlangıçta en büyük sayı değerini veriyorum
    while (counter <= stacks->topb)
    {
        cost += totop_stacka(stacks, stacks->stackb[counter]);//sayıyı a'ya atarsam gereken maliyet
        cost = totop_stackb(stacks, counter, cost);//sayıyı b'nin üstüne çıkarmak için gereken maliyeti cost'a ekle ve güncelle
        if (best > cost)
        {
            best = cost;
            index = counter;
        }
        cost = 0;
        counter++;
    }
    return (index);
}

//a stackindeki bana lazım olan sayıyı en üste getirmek için kullanıyorum
void    go_top_stacka(t_stack *stacks, int index)
{
    if (index >= stacks->topa / 2)
	{
		while (index < stacks->topa)
		{
			ra(stacks->stacka, stacks->topa);
			index++;
		}
	}
	else
	{
		while (index >= 0)
		{
			rra(stacks->stacka, stacks->topa);
			index--;
		}
	}
}

//en ucuz maliyetli sayımı b stackinde en üste getiriyorum
void    go_top_stackb(t_stack *stacks, int  best_index)
{
    if (best_index >= stacks->topb / 2)
	{
		while (best_index < stacks->topb)
		{
			rb(stacks->stackb, stacks->topb);
			best_index++;
		}
	}
	else
	{
		while (best_index >= 0)
		{
			rrb(stacks->stackb, stacks->topb);
			best_index--;
		}
    }
}

//en ucuz maliyetli sayı için işlemlerin gerçekleştirilmesi
void    select_and_place(t_stack *stacks, int best_index)
{
    int selected;
    int needed_a_position;

    needed_a_position = 0;
    selected = stacks->stackb[best_index];
    //burada ve find_cost_in_stacka()'de get_max_stacka() için neden bir işlem adımı yok, yalnızca koşullarda geçiyor?
	//cevap: min'e göre işlemi yaptığımda zaten max için de doğru yere koymuş oluyorum, rotate atarken sıralı geliyorlar çünkü!!!
    if (selected > max_stacka(stacks) || selected < min_stacka(stacks))
    	needed_a_position = min_position_stacka(stacks);
	else
		needed_a_position = next_stacka(stacks, selected);
	
    go_top_stacka(stacks, needed_a_position);
	go_top_stackb(stacks, best_index);
	pa(stacks);
}