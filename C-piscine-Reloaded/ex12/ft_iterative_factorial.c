/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:28:32 by cozen             #+#    #+#             */
/*   Updated: 2024/04/15 19:28:33 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb > 0)
	{
		while (nb > 1)
		{
			result *= (nb - 1);
			nb--;
		}
		return (result);
	}
	else
		return (0);
}

/*
int	main(void)
{
	int	nbr;

	nbr = 1;
	printf("%i", ft_iterative_factorial(nbr));
	return (0);
}
*/
