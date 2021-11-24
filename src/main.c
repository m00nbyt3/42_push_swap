/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:00:04 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/24 16:31:18 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//Mirar los tamanos de los stack VAN CAMBIANDO !!!


#include "../include/push_swap.h"

void	lowerarg(t_stack *stack);

int main(int argc, char **argv)
{
	t_stack stack;
	t_args	args;

	if (argc < 2)
		return (error("No arguments passed!"));
	checkargs(argc, argv, &args);
	stack.a = args.nums;
	stack.a_size = args.size;
	makedummy(&stack);
	stack.b = malloc(args.size * sizeof(int));
	stack.b_size = 0;
	lowerarg(&stack);

	//For testing -----------------------------
	/*printf("\nSIZE: %d\n", stack.a_size);
	int i = 0;
	int suck = stack.a_size;
	printf("\n");
	printf("-----A-----:\n");
	while(suck--)
		printf("%d\n", *(stack.a + i++));
	printf("-----------\n\n\n");
	if (stack.b_size)
		printf("B stack not cleaned!\n");
	printf("-----B-----:\n");
	i = 0;
	suck = stack.b_size;
	while(suck--)
		printf("%d\n", *(stack.b + i++));
	printf("-----------\n\n\n");*/
	//------------------------------------------

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
		sandw(stack, 14);
}
