/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:00:04 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/02 14:48:03 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	setstack(int *save, char **list, int count);
void	algof3(int *nums, int size);

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
	if (argc == 4)
		algof3(stack.a, stack.size);
	int i = 0;
	printf("\n\n\n");
	while(stack.size--)
		printf("%d\n", *(stack.a + i++));
	free(stack.a);
	free(stack.b);
}


void	setstack(int *save, char **list, int count)
{
	while (count--)
		*(save++) = ft_atoi(*(list++));
}

void	algof3(int *nums, int size)
{
	if (*nums < *(nums + 1) && *(nums + 1) < *(nums + 2))
		printf("Yesir\n");
	if (*nums < *(nums + 1))
	{
		if (*(nums + 1) > *(nums + 2))
			swap(nums, 'a');
			
	}
}