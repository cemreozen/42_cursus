/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:07:17 by cozen             #+#    #+#             */
/*   Updated: 2024/04/15 19:07:20 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a[10];
	int	b[10];
	char	c1;
	char	c2;

	*a = 6;
	*b = 7;
	
	ft_swap(a, b);

	c1 = '0' + *a;
	c2 = '0' + *b;
	write(1, &c1, 1);
	write(1, "\n", 1);
	write(1, &c2, 1);
}
*/
