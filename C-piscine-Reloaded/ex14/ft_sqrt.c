/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:31:22 by cozen             #+#    #+#             */
/*   Updated: 2024/04/18 10:31:23 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

//binary search algorithm
int	ft_sqrt(int nb)
{
	int	upper_limit;
	int	lower_limit;
	int	middle;
	int	square;

	lower_limit = 0;
	upper_limit = 46340;
	while (upper_limit >= lower_limit)
	{
		middle = (lower_limit + upper_limit) / 2;
		square = middle * middle;
		if (square > nb)
			upper_limit = middle - 1;
		else if (square < nb)
			lower_limit = middle + 1;
		else
			return (middle);
	}
	return (0);
}

/*
int	main(void)
{
	int	number;

	number = (46340*46340);
	printf("%i\n", number);
	printf("%d\n", ft_sqrt(number));
	return (0);
}
*/
