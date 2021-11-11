/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opdouble.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:37:36 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/11 12:14:42 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ss(t_stack *stack);
void	rr(t_stack *stack);
void	rrr(t_stack *stack);

void ss(t_stack *stack)
{
	swap(stack->a, 's');
	swap(stack->b, 'x');

}

void rr(t_stack *stack)
{
	rotate(stack->a, stack->a_size, 's');
	rotate(stack->b, stack->b_size, 'x');
}

void rrr(t_stack *stack)
{
	r_rotate(stack->a, stack->a_size, 's');
	r_rotate(stack->b, stack->b_size, 'x');
}