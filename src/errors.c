/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:54:28 by ycarro            #+#    #+#             */
/*   Updated: 2021/12/10 15:14:50 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		error(void);
int		error_free(int *arr);
void	check_reps(int *nums, int size);

int	error(void)
{
	printf("Error\n");
	exit(0);
}

int	error_free(int *arr)
{
	printf("Error\n");
	free(arr);
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
