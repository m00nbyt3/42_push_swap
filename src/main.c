/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:00:04 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/17 14:23:00 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//Mirar los tamanos de los stack VAN CAMBIANDO !!!


#include "../include/push_swap.h"

void	setstack(int *save, char **list, int count);
void	lowerarg(t_stack *stack, int argc);

int main(int argc, char **argv)
{
	t_stack stack;

	if (argc < 2)
		return (error("No arguments passed!"));
	/*if (!checkargs(argv))
		return (error("Invalid arguments!"));*/
	/*stack.a_size = argc - 1;
	stack.b_size = 0;
	stack.a = malloc((stack.a_size) * sizeof(int));
	stack.b = malloc((stack.a_size) * sizeof(int));
	setstack(stack.a, argv + 1, stack.a_size);*/
	stack.a = malloc(ft_split(argv, ' ') * sizeof(int));
	printf("\nIt is better: %d \n\n", slower(stack.a, stack.a_size));
	lowerarg(&stack, argc);

	//For testing
	/*if (argc == 4)
		algof31(stack.a, stack.size);
	if (argc == 5)
		al*/
	int i = 0;
	int suck = stack.a_size;
	printf("\n");
	printf("-----A-----:\n");
	while(suck--)
		printf("%d\n", *(stack.a + i++));
	printf("-----------\n\n\n");
	printf("-----B-----:\n");
	i = 0;
	suck = stack.b_size;
	while(suck--)
		printf("%d\n", *(stack.b + i++));
	printf("-----------\n\n\n");
	free(stack.a);
	free(stack.b);
}


void	setstack(int *save, char **list, int count)
{
	while (count--)
		*(save++) = ft_atoi(*(list++));
}

void	lowerarg(t_stack *stack, int argc)
{
	//t_stack *stack;

	//stack = (t_stack *)load;
	if (argc == 3)
		algof2(stack->a);
	else if (argc == 4)
		algof31(stack->a, stack->a_size);
	else if (argc == 5)
		algof4(stack);
	else if (argc == 6)
		algof5(stack);

}
