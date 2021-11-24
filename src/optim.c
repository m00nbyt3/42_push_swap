/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optim.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:41:23 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/24 15:41:52 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		howmuch(int *nums, int max, int size);

int howmuch(int *nums, int max, int size)
{
	int	norm;
	int	rev;
	int	i;

	norm = 0;
	i = -1;
	while (++i < size)
		if (nums[i] < max)
			norm = i;
	i = size;
	while (--i > -1)
		if (nums[i] < max)
			rev = size - i;
	if (--rev < norm)
		return (-1);
	else
		return (1);
}
