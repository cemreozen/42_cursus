/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:03:34 by cozen             #+#    #+#             */
/*   Updated: 2024/04/25 15:04:40 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest;
	const unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (dest == source)
		return (dest);
	if (source > dest || dest >= source + len)
	{
		while (len--)
			*dest++ = *source++;
	}
	else
	{
		dest += len - 1;
		source += len - 1;
		while (len--)
			*dest-- = *source--;
	}
	return (dst);
}
