/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycarro <ycarro@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:07:44 by ycarro            #+#    #+#             */
/*   Updated: 2021/11/12 12:14:22 by ycarro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	checkargs(int argc, char **argv);
int	divide(char *line);
int main(int argc, char **argv);


int	checkargs(int argc, char **argv)
{
	int	sec;
	int	tmp;
	int	i;

	sec = argc - 1;
	tmp = 0;
	while (++tmp < argc)
	{
		i = -1;
		while (argv[tmp][++i])
		{
			if (argv[tmp][i] == ' ')
			{
				sec += (divide(argv[tmp])) - 1;
				break;
			}
		}
	}
	return (sec);
}

int	divide(char *line)
{
	int	cnt;

	cnt = 0;
	if (*(line) != ' ')
		cnt++;
	while (*line)
	{
		if (*line == ' ' && *(line + 1) != ' ')
			if (*(line + 1))
				cnt++;
		line++;
	}
	return (cnt);
}

int main(int argc, char **argv)
{
	int words;

	words = checkargs(argc, argv);
	printf("%d\n", words);
	return 0;
}