/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:40:40 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/02 15:13:41 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(int *stack, char side);

void	swap(int *stack, char side)
{
	int tmp;

	if (side == 'a')
		write(1, "sa", 2);
	else if (side == 'b')
		write(1, "sb", 2);
	tmp = *stack;
	*stack = *(stack + 1);
	*(stack + 1) = tmp;
}

void	rotate(int *stack, int size, char side)
{
	int tmp;
	int i;

	if (side == 'a')
		write(1, "ra", 2);
	else if (side == 'b')
		write(1, "rb", 2);
	tmp = *stack;
	i = 0;
	while (i != size)
		*(stack + i) = *(stack + (i + 1));
}