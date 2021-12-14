/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:45:34 by ycarro            #+#    #+#             */
/*   Updated: 2021/12/14 16:00:58 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_int_tab(int *tab, int size);
void	makedummy(t_stack *stack);
void	issorted(t_stack *stack);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < (size - 1))
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	makedummy(t_stack *stack)
{
	int	size;
	int	i;

	size = stack->a_size;
	stack->ordered = malloc(size * sizeof(int));
	i = -1;
	while (++i < size)
		stack->ordered[i] = stack->a[i];
	ft_sort_int_tab(stack->ordered, stack->a_size);
	stack->o_size = size;
}

void	issorted(t_stack *stack)
{
	int	pos;

	pos = -1;
	while (++pos < (stack->a_size - 1))
		if (stack->a[pos] > stack->a[pos + 1])
			return ;
	free(stack->a);
	exit(0);
}
