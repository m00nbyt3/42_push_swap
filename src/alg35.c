/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg35.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:45:55 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/23 11:02:13 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	algof2(int *nums);
void	algof31(int *nums, int size);
void	algof32(int *nums, int size);
void	algof4(t_stack *stack);
void	algof5(t_stack *stack);

void	algof2(int *nums)
{
	if (*nums > *(nums + 1))
		swap(nums, 'a');
}

void	algof31(int *nums, int size)
{
	if (*nums < *(nums + 1))
	{
		if (*(nums + 1) > *(nums + 2))
		{
			if (*(nums) < *(nums + 2))
			{
				swap(nums, 'a');
				rotate(nums, size, 'a');
			}
			else if (*(nums) > *(nums + 2))
				r_rotate(nums, size, 'a');
		}
	}
	else if (*nums > *(nums + 1))
		algof32(nums, size);
}

void	algof32(int *nums, int size)
{
	if (*(nums + 1) > *(nums + 2))
	{
		swap(nums, 'a');
		r_rotate(nums, size, 'a');
	}
	else if (*(nums + 1) < *(nums + 2))
	{
		if (*(nums) > *(nums + 2))
			rotate(nums, size, 'a');
		else if (*(nums) < *(nums + 2))
			swap(nums, 'a');
	}
}

void	algof4(t_stack *stack)
{
	int moves;

	moves = slower(stack->a, stack->a_size);
	if (moves > 0)
		while(moves--)
			rotate(stack->a, stack->a_size, 'a');
	else
		while(moves++)
			r_rotate(stack->a, stack->a_size, 'a');
	push(stack, 'b');
	algof31(stack->a, stack->a_size);
	push(stack, 'a');
}

void	algof5(t_stack *stack)
{
	int	moves;

	moves = slower(stack->a, stack->a_size);
	if (moves > 0)
		while(moves--)
			rotate(stack->a, stack->a_size, 'a');
	else
		while(moves++)
			r_rotate(stack->a, stack->a_size, 'a');
	push(stack, 'b');
	moves = slower(stack->a, stack->a_size);
	if (moves > 0)
		while(moves--)
			rotate(stack->a, stack->a_size, 'a');
	else
		while(moves++)
			r_rotate(stack->a, stack->a_size, 'a');
	push(stack, 'b');
	if (*(stack->b) < *((stack->b) + 1))
		swap(stack->b, 'b');
	algof31(stack->a, stack->a_size);
	push(stack, 'a');
	push(stack, 'a');
}
