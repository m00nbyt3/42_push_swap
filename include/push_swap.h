/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:14:41 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/19 12:35:50 by ycarro           ###   ########.fr       */
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
	int a_size;
	int b_size;
}				t_stack;

typedef struct s_args
{
	int *nums;
	int size;
}				t_args;

//Functions
//------------------------------------------------------
//Basics
void	setstack(int *save, char **list, int count);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
void	lowerarg(t_stack *stack, int argc);
int		slower(int *nums,  int size);
int		sbigger(int *nums,  int size);

//Algs
void	algof2(int *nums);
void	algof31(int *nums, int size);
void	algof32(int *nums, int size);
void	algof4(t_stack *stack);
void	algof5(t_stack *stack);

//Operations
void	swap(int *stack, char side);
void	push(t_stack *stack, char side);
void	rotate(int *stack, int size, char side);
void	r_rotate(int *stack, int size, char side);
void	ss(t_stack *stack);
void	rr(t_stack *stack);
void	rrr(t_stack *stack);

//Errores
int		error();

//------------------------------------------------------

#endif