/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:06:07 by cozen             #+#    #+#             */
/*   Updated: 2024/04/25 15:06:40 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	a;

	a = c;
	p = (unsigned char *)s;
	while (n > 0)
	{
		if (*p == a)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}
