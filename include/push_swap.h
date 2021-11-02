/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:00:34 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/02 14:49:14 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//Header Files
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <unistd.h>

//Structs
typedef struct s_stack
{
	int	*a;
	int	*b;
	int size;
}				t_stack;

//Functions
void	setstack(int *save, char **list, int count);
void	algof3(int *nums, int size);
void	swap(int *stack, char side);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
int		error(char *err);

#endif