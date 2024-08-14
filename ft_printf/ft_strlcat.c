/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:58:39 by cozen             #+#    #+#             */
/*   Updated: 2024/04/25 14:58:41 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize < len_dst)
		return (len_src + dstsize);
	dst += len_dst;
	j = 0;
	if (dstsize > len_dst)
	{
		while (src[j] != '\0' && dstsize - len_dst - 1 > j)
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (len_dst + len_src);
}
