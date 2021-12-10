/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algdef.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:50:22 by ycarro            #+#    #+#             */
/*   Updated: 2021/12/10 11:38:14 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sandw(t_stack *stack, int div);
void	bread(t_stack *stack);

void	sandw(t_stack *stack, int div)
{
	int	ndata;
	int	i;
	int	j;
	int	move;

	ndata = stack->a_size / div;
	j = -1;
	while (++j < div)
	{
		i = 0;
		while (i++ < ndata)
		{
			move = inrange(stack->a, stack->ordered[j * ndata], \
				stack->ordered[((j + 1) * ndata)], stack->a_size);
			if (move > 0)
				while (move--)
					rotate(stack->a, stack->a_size, 'a');
			else if (move < 0)
				while (move++)
					r_rotate(stack->a, stack->a_size, 'a');
			push(stack, 'b');
		}
	}
	bread(stack);
}

void	bread(t_stack *stack)
{
	int	move;

	while (stack->a_size)
		push(stack, 'b');
	while (stack->b_size)
	{
		move = sbigger(stack->b, stack->b_size);
		if (move > 0)
			while (move--)
				rotate(stack->b, stack->b_size, 'b');
		else if (move < 0)
			while (move++)
				r_rotate(stack->b, stack->b_size, 'b');
		push(stack, 'a');
	}
}
