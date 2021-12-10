/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:40:40 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/30 12:14:28 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(int *stack, char side);
void	push(t_stack *stack, char side);
void	push2(int *to, int *from, int i, int j);
void	rotate(int *stack, int size, char side);
void	r_rotate(int *stack, int size, char side);

void	swap(int *stack, char side)
{
	int	tmp;

	if (side == 'a')
		write(1, "sa\n", 3);
	else if (side == 'b')
		write(1, "sb\n", 3);
	else if (side == 's')
		write(1, "ss\n", 3);
	tmp = *stack;
	*stack = *(stack + 1);
	*(stack + 1) = tmp;
}

void	push(t_stack *stack, char side)
{
	int	i;
	int	j;
	int	*to;
	int	*from;

	i = 0;
	if (side == 'a')
	{
		write(1, "pa\n", 3);
		to = stack->a;
		from = stack->b;
		i = stack->a_size++;
		j = stack->b_size--;
	}
	else
	{
		write(1, "pb\n", 3);
		to = stack->b;
		from = stack->a;
		i = stack->b_size++;
		j = stack->a_size--;
	}
	push2(to, from, i, j);
}

void	push2(int *to, int *from, int i, int j)
{
	while (--i >= 0)
		*(to + (i + 1)) = *(to + i);
	*to = *from;
	i = -1;
	while (++i != j)
		*(from + i) = *(from + (i + 1));
}

void	rotate(int *stack, int size, char side)
{
	int	tmp;
	int	i;

	if (side == 'a')
		write(1, "ra\n", 3);
	else if (side == 'b')
		write(1, "rb\n", 3);
	else if (side == 's')
		write(1, "rr\n", 3);
	tmp = *stack;
	i = -1;
	while (++i != size)
		*(stack + i) = *(stack + (i + 1));
	*(stack + (size - 1)) = tmp;
}

void	r_rotate(int *stack, int size, char side)
{
	int	tmp;
	int	i;

	if (side == 'a')
		write(1, "rra\n", 4);
	else if (side == 'b')
		write(1, "rrb\n", 4);
	else if (side == 's')
		write(1, "rrr\n", 4);
	tmp = *(stack + (size - 1));
	i = (size - 1);
	while (--i >= 0)
		*(stack + (i + 1)) = *(stack + i);
	*stack = tmp;
}
