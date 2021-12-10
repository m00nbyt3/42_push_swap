/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   near.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:58:25 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/30 12:15:07 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	slower(int *nums, int size);
int	sbigger(int *nums, int size);
int	inrange(int *nums, int min, int max, int size);
int	betterstart(int upos, int dpos, int size);

int	slower(int *nums, int size)
{
	int	upos;
	int	dpos;
	int	i;

	i = 0;
	upos = i;
	while (++i < size)
		if (nums[i] < nums[upos])
			upos = i;
	i = size - 1;
	dpos = i;
	while (--i >= 0)
		if (nums[i] < nums[dpos])
			dpos = i;
	dpos = size - dpos;
	if (dpos < upos)
		return (dpos * (-1));
	else
		return (upos);
}

int	sbigger(int *nums, int size)
{
	int	upos;
	int	dpos;
	int	i;

	i = 0;
	upos = i;
	while (++i < size)
		if (nums[i] > nums[upos])
			upos = i;
	i = size - 1;
	dpos = i;
	while (--i >= 0)
		if (nums[i] > nums[dpos])
			dpos = i;
	dpos = size - dpos;
	if (dpos < upos)
		return (dpos * (-1));
	else
		return (upos);
}

int	inrange(int *nums, int min, int max, int size)
{
	int	upos;
	int	dpos;
	int	i;

	i = -1;
	upos = i;
	while (++i < size)
	{
		if (nums[i] >= min && nums[i] < max)
		{
			upos = i;
			break ;
		}
	}
	i = size;
	dpos = i;
	while (--i >= 0)
	{
		if (nums[i] >= min && nums[i] < max)
		{
			dpos = i;
			break ;
		}
	}
	return (betterstart(upos, dpos, size));
}

int	betterstart(int upos, int dpos, int size)
{
	dpos = size - dpos;
	if (dpos < upos)
		return (dpos * (-1));
	else
		return (upos);
}
