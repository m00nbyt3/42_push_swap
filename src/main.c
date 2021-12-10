/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:00:04 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/30 11:33:11 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	lowerarg(t_stack *stack);

int	main(int argc, char **argv)
{
	t_stack	stack;
	t_args	args;

	if (argc < 2)
		error();
	stack.a_size = -1;
	checkargs(argc, argv, &args);
	stack.a = args.nums;
	stack.a_size = args.size;
	check_reps(stack.a, stack.a_size);
	makedummy(&stack);
	stack.b = malloc(args.size * sizeof(int));
	stack.b_size = 0;
	lowerarg(&stack);
	free(stack.a);
	free(stack.b);
}

void	lowerarg(t_stack *stack)
{
	if (stack->a_size == 2)
		algof2(stack->a);
	else if (stack->a_size == 3)
		algof31(stack->a, stack->a_size);
	else if (stack->a_size == 4)
		algof4(stack);
	else if (stack->a_size == 5)
		algof5(stack);
	else if (stack->a_size < 101)
		sandw(stack, 8);
	else
		sandw(stack, 12);
}
