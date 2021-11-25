/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algdef.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:50:22 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/25 13:23:54 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sandw(t_stack *stack, int div);
void	bread(t_stack *stack);

//Not in use
void 	sesame(t_stack *stack);
void	dbingr(t_stack *stack, int ndata, int *grow);

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
				move = inrange(stack->a,  stack->ordered[j * ndata], \
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


//Not in use
void 	sesame(t_stack *stack)
{
	int end = stack->o_size - 1;
	int doit;

	doit = 0;
	if (stack->b[0] == stack->ordered[end - 1])
		if (stack->b[1] == stack->ordered[end])
			if (stack->b[2] == stack->ordered[end - 3])
				if (stack->b[3] == stack->ordered[end - 2])
					doit++;
	if (doit)
	{
		printf("here\n");
		push(stack, 'a');
		push(stack, 'a');
		ss(stack);
		if (stack->b_size >= 4)
			sesame(stack);
	}
}

void	dbingr(t_stack *stack, int ndata, int *j)
{
	int i;
	int move;

	i = 0;
	while (i++ < (ndata * 2))
	{
		move = inrange(stack->a,  stack->ordered[*j * ndata], \
			stack->ordered[(*j + 2) * ndata], stack->a_size);
		if (move > 0)
			while (move--)
				rotate(stack->a, stack->a_size, 'a');
		else if (move < 0)
			while (move++)
				r_rotate(stack->a, stack->a_size, 'a');
		push(stack, 'b');
		if (stack->b_size  > 1 && *(stack->b) < *(stack->b + 1))
		{
			printf("%d -- %d\n", *(stack->b), *(stack->b + 1));
			rotate(stack->b, stack->b_size, 'b');
		}
	}
	*j += 1;
}
