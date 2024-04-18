/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:32:10 by cozen             #+#    #+#             */
/*   Updated: 2024/04/18 10:32:12 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_params(int argcount, char *string[])
{
	int	i;
	int	j;

	if (argcount > 1)
	{
		i = 1;
		while (i < argcount)
		{
			j = 0;
			while (string[i][j] != '\0')
			{
				write(1, &string[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		while (s1[i] == s2[i])
			i++;
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char *a[], char *b[])
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	param_sorter(int argcount, char *string[])
{
	int	times_sort;
	int	index;

	if (argcount > 1)
	{
		times_sort = 0;
		while (times_sort < argcount - 1)
		{
			index = 1;
			while (index < argcount - times_sort - 1)
			{
				if (ft_strcmp(string[index], string[index + 1]) > 0)
					ft_swap(&string[index], &string[index + 1]);
				index++;
			}
			times_sort++;
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		param_sorter(argc, argv);
		print_params(argc, argv);
	}
	return (0);
}
