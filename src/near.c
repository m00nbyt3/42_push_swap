/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   near.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:58:25 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/11 12:39:05 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		slower(int *nums,  int size);
int		sbigger(int *nums,  int size);

int	slower(int *nums,  int size)
{
	int upos;
	int dpos;
	int i;

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
		return(dpos * (-1));
	else
		return(upos);
}

int	sbigger(int *nums,  int size)
{
	int upos;
	int dpos;
	int i;

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
		return(dpos * (-1));
	else
		return(upos);
}
