/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opdouble.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:37:36 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/05 11:26:02 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ss(void *load);
void rr(void *load);
void rrr(void *load);

void ss(void *load)
{
	t_stack *stack;

	stack = (t_stack *)load;
	swap(stack->a, 's');
	swap(stack->b, 'x');

}

void rr(void *load)
{
	t_stack *stack;

	stack = (t_stack *)load;
	rotate(stack->a, stack->size, 's');
	rotate(stack->b, stack->size, 'x');
}

void rrr(void *load)
{
	t_stack *stack;

	stack = (t_stack *)load;
	r_rotate(stack->a, stack->size, 's');
	r_rotate(stack->b, stack->size, 'x');
}