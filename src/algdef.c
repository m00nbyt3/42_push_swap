/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algdef.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:50:22 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/24 16:13:46 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sandw(t_stack *stack, int div);
void	bread(t_stack *stack);
void 	partit(t_stack *stack);
int		schmid(t_stack *stack);
void	reset(t_stack *stack);


//NEW METHOD
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
void	reset(t_stack *stack)
{
	int tot;
	int	moves;

	tot = stack->b_size;
	moves = -1;
	while (++moves < tot)
		push(stack, 'a');
}

//OLD METHOD
void	partit(t_stack *stack)
{
	int	mid;
	int	count;
	
	mid = schmid(stack);
	printf("\nMID: %d\n\n", mid);
	count = 0;
	//Ver pasos optimos up or down en optim.c
	//howmuch(stack->a, mid, stack->a_size);
	/*while (count != mid)
	{
		if (stack.->a[0] < mid)
	}*/
	
}

int	schmid(t_stack *stack)
{
	int	size;
	int	i;

	size = stack->a_size;
	stack->ordered = malloc(size * sizeof(int));
	i = -1;
	while (++i < size)
		stack->ordered[i] =stack->a[i];
	ft_sort_int_tab(stack->ordered, stack->a_size);
	return(stack->ordered[stack->a_size / 2]);
}
