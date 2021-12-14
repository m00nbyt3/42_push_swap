/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:14:41 by ycarro            #+#    #+#             */
/*   Updated: 2021/12/14 15:48:50 by ycarro           ###   ########.fr       */
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
	int	*ordered;
	int	a_size;
	int	b_size;
	int	o_size;
}				t_stack;

typedef struct s_args
{
	int	*nums;
	int	size;
}				t_args;

//Functions
//------------------------------------------------------
//Basics
void	lowerarg(t_stack *stack);
int		slower(int *nums, int size);
int		sbigger(int *nums, int size);
int		inrange(int *nums, int min, int max, int size);
int		betterstart(int upos, int dpos, int size);
void	checkargs(int argc, char **argv, t_args *arr);
void	divide(char *line, t_args *arr);
long	ft_atoi(const char *str, int *arr);
void	save(char *str, t_args *arr);

//Algs
void	algof2(int *nums);
void	algof31(int *nums, int size);
void	algof32(int *nums, int size);
void	algof4(t_stack *stack);
void	algof5(t_stack *stack);
void	sandw(t_stack *stack, int div);
void	bread(t_stack *stack);
void	sesame(t_stack *stack);
void	dbingr(t_stack *stack, int ndata, int *grow);

//Operations
void	swap(int *stack, char side);
void	push(t_stack *stack, char side);
void	push2(int *to, int *from, int i, int j);
void	rotate(int *stack, int size, char side);
void	r_rotate(int *stack, int size, char side);
void	ss(t_stack *stack);
void	rr(t_stack *stack);
void	rrr(t_stack *stack);

//Utils
void	ft_sort_int_tab(int *tab, int size);
void	makedummy(t_stack *stack);
void	issorted(t_stack *stack);

//Errores
int		error(void);
int		error_free(int *arr);
void	check_empty(t_args *arr, char *str);
void	check_reps(int *nums, int size);

//------------------------------------------------------

#endif