/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:45:34 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/25 12:47:18 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	arrcpy(int *org, int *dst, int size);
void	ft_sort_int_tab(int *tab, int size);
void	makedummy(t_stack *stack);

void	arrcpy(int *org, int *dst, int size)
{
	dst = malloc(size * sizeof(int));
	while  (size--)
	{
		*dst = *org;
		org++;
		dst++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int tmp;

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
