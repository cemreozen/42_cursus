/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:02:19 by cozen             #+#    #+#             */
/*   Updated: 2024/04/25 15:03:18 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	a;

	a = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = a;
		ptr++;
		n--;
	}
	return (s);
}
