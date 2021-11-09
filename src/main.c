/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:00:04 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/09 14:17:42 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//Mirar los tamanos de los stack VAN CAMBIANDO !!!


#include "../include/push_swap.h"

void	setstack(int *save, char **list, int count);
void	lowerarg(void *load, int argc);

int main(int argc, char **argv)
{
	t_stack stack;

	if (argc < 1)
		return (error("No arguments passed!"));
	/*if (!checkargs(argv))
		return (error("Invalid arguments!"));*/
	stack.size = argc - 1;
	stack.a = malloc((stack.size) * sizeof(int));
	stack.b = malloc((stack.size) * sizeof(int));
	setstack(stack.a, argv + 1, stack.size);
	printf("\nIt is better: %d \n\n", sbigger(stack.a, stack.size));
	lowerarg(&stack, argc);

	//For testing
	/*if (argc == 4)
		algof31(stack.a, stack.size);
	if (argc == 5)
		al*/
	int i = 0;
	int suck = stack.size;
	printf("\n\n\n");
	printf("A:\n");
	while(suck--)
		printf("%d\n", *(stack.a + i++));
	printf("\n\n\n");
	printf("B:\n");
	i = 0;
	suck = stack.size;
	while(suck--)
		printf("%d\n", *(stack.b + i++));
	free(stack.a);
	free(stack.b);
}


void	setstack(int *save, char **list, int count)
{
	while (count--)
		*(save++) = ft_atoi(*(list++));
}

void	lowerarg(void *load, int argc)
{
	t_stack *stack;

	stack = (t_stack *)load;
	if (argc == 3)
		//algof2(stack.a);
		printf("of 2\n");
	else if (argc == 4)
		algof31(stack->a, stack->size);
	else if (argc == 5)
		algof4(load);
		//printf("of 4\n");

}
