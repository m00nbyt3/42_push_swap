/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:07:44 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/30 11:31:10 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	checkargs(int argc, char **argv, t_args *arr);
void	divide(char *line, t_args *arr);
int		ft_atoi(const char *str);
void	save(char *str, t_args *arr);

void	checkargs(int argc, char **argv, t_args *arr)
{
	int	tmp;
	int	i;
	int	mult;

	arr->size = 0;
	tmp = 0;
	while (++tmp < argc)
	{
		i = -1;
		mult = 0;
		while (argv[tmp][++i])
		{
			if (argv[tmp][i] == ' ')
			{
				divide(argv[tmp], arr);
				mult++;
				break ;
			}
		}
		if (!mult)
		{
			arr->size++;
			save(argv[tmp], arr);
		}
	}
}

void	divide(char *line, t_args *arr)
{
	char	*tmp;

	tmp = line;
	if (*(line) != ' ')
	{
		arr->size++;
		save(line, arr);
	}
	while (*line)
	{
		if (*line == ' ' && *(line + 1) != ' ')
		{
			if (*(line + 1))
			{
				arr->size++;
				save(line + 1, arr);
			}
		}
		line++;
	}
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
		if (*str < '0' || *str > '9')
			error();
	}
	while (*str && *str != ' ')
	{
		if (*str < '0' || *str > '9')
			error();
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * sign);
}

void	save(char *str, t_args *arr)
{
	int	*tmp;
	int	i;

	tmp = malloc((arr->size) * sizeof(int));
	i = -1;
	if (arr->size > 1)
	{
		while (++i < arr->size)
			tmp[i] = arr->nums[i];
		free(arr->nums);
	}
	tmp[arr->size - 1] = ft_atoi(str);
	arr->nums = tmp;
}
