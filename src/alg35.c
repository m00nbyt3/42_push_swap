/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg35.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:45:55 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/09 14:16:32 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	algof2(int *nums);
void	algof31(int *nums, int size);
void	algof32(int *nums, int size);
void	algof4(void *load);

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

void	algof4(void *load)
{
	t_stack *stack;
	int moves;

	stack = (t_stack *)load;
	moves = slower(stack->a, stack->size);
	if (moves > 0)
	{
		while(moves--)
			rotate(stack->a, stack->size, 'a');
	}
	else
	{
		while(moves++)
			r_rotate(stack->a, stack->size, 'a');
	}
	printf("%d\n", *(stack->a));
	push(stack->a, stack->b, stack->size, 'b');
	printf("\n\n\n%d\n", *(stack->a));
	printf("%d\n", *((stack->a) + 1));
	printf("%d\n", *((stack->a) + 2));
	printf("%d\n\n\n", *((stack->a) + 3));
	algof31(stack->a, stack->size);
	printf("\n\n\n%d\n", *(stack->a));
	printf("%d\n", *((stack->a) + 1));
	printf("%d\n\n\n", *((stack->a) + 2));
	push(stack->b, stack->a, stack->size, 'a');
}