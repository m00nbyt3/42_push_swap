/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:14:41 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/09 14:05:53 by ycarro           ###   ########.fr       */
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
//------------------------------------------------------
//Basics
void	setstack(int *save, char **list, int count);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
void	lowerarg(void *load, int argc);
int		slower(int *nums,  int size);
int		sbigger(int *nums,  int size);

//Algs
void	algof31(int *nums, int size);
void	algof32(int *nums, int size);
void	algof4(void *load);

//Operations
void	swap(int *stack, char side);
void	push(int *from, int *to, int size, char side);
void	rotate(int *stack, int size, char side);
void	r_rotate(int *stack, int size, char side);
void	ss(void *load);
void	rr(void *load);
void	rrr(void *load);

//Errores
int		error(char *err);

//------------------------------------------------------

#endif