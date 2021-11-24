/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algdef.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:50:22 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/24 16:29:06 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sandw(t_stack *stack, int div);
void	bread(t_stack *stack);

void	sandw(t_stack *stack, int div)
{
	int ndata;
	int	i;
	int j;
	int	move;

	ndata = stack->a_size / div;
	j = 0;
	while (j < div)
	{
		i = 0;
		while (i++ < ndata)
		{
			move = rlower(stack->a,  stack->ordered[j * ndata], \
				stack->ordered[(j + 1) * ndata], stack->a_size);
			if (move > 0)
				while (move--)
					rotate(stack->a, stack->a_size, 'a');
			else if (move < 0)
				while (move++)
					r_rotate(stack->a, stack->a_size, 'a');
			push(stack, 'b');
		}
		j++;
	}
	bread(stack);
}

void	bread(t_stack *stack)
{
	int move;

	while (stack->b_size)
	{
		move = sbigger(stack->b,  stack->b_size);
		if (move > 0)
			while (move--)
				rotate(stack->b, stack->b_size, 'b');
		else if (move < 0)
			while (move++)
				r_rotate(stack->b, stack->b_size, 'b');
		push(stack, 'a');
	}
}
