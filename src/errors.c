/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:54:28 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/26 15:41:22 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	error(void)
{
	printf("Error\n");
	exit(0);
}

void	check_reps(int *nums, int size)
{
	int	i;
	int	j;

	j = 0;
	while (j < size)
	{
		i = j + 1;
		while (i < size)
		{
			if (nums[j] == nums[i])
			{
				free(nums);
				printf("Error\n");
				exit(0);
			}
			i++;
		}
		j++;
	}
}