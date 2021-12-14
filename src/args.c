/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:07:44 by ycarro            #+#    #+#             */
/*   Updated: 2021/12/14 12:29:25 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	checkargs(int argc, char **argv, t_args *arr);
void	divide(char *line, t_args *arr);
long	ft_atoi(const char *str, int *arr);
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

	check_empty(arr, line);
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

long	ft_atoi(const char *str, int *arr)
{
	int		sign;
	long	num;
	int		err;

	sign = 1;
	num = 0;
	err = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
		if (*str < '0' || *str > '9')
			err++;
	}
	while (*str && *str != ' ')
	{
		if (*str < '0' || *str > '9')
			err++;
		num = (num * 10) + (*str - '0');
		str++;
	}
	if (err)
		error_free(arr);
	return (num * sign);
}

void	save(char *str, t_args *arr)
{
	int		*tmp;
	int		i;
	long	num;

	tmp = malloc((arr->size) * sizeof(int));
	i = -1;
	if (arr->size > 1)
	{
		while (++i < (arr->size - 1))
			tmp[i] = arr->nums[i];
		free(arr->nums);
	}
	num = ft_atoi(str, tmp);
	if (num > INT_MAX || num < INT_MIN || !num)
		error_free(tmp);
	tmp[arr->size - 1] = (int)num;
	arr->nums = tmp;
}
