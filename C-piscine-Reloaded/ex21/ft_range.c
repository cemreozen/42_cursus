/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:32:26 by cozen             #+#    #+#             */
/*   Updated: 2024/04/18 10:32:27 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		*array_of_ints;
	int		i;
	size_t	range;

	range = max - min;
	if (range < 0)
		return (NULL);
	array_of_ints = (int *)malloc(range * sizeof(int));
	if (array_of_ints == NULL)
		return (NULL);
	i = 0;
	while (max > min)
	{
		array_of_ints[i] = min;
		i++;
		min++;
	}
	return (array_of_ints);
}

/*
int	main(void)
{
	int	*array;

	array = ft_range(0,10);
	free(array);
	return (0);
}
*/
