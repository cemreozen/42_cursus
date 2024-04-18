/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:07:04 by cozen             #+#    #+#             */
/*   Updated: 2024/04/18 13:07:05 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	if (tab == NULL)
		return ;
	i = 0;
	while (length--)
	{
		(*f)(tab[i]);
		i++;
	}
}
