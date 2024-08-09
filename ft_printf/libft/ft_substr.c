/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:40:24 by cozen             #+#    #+#             */
/*   Updated: 2024/04/26 15:42:00 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

static size_t	length(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

static size_t	ft_strlcopy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while ((src[i] != '\0') && (i < dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (length(src));
}

static char	*ft_substrcpy(unsigned char *dst,
		const char *src, size_t len, unsigned int start)
{
	int	i;

	i = 0;
	while (len > 0 && src[start + i] != '\0')
	{
		dst[i] = src[start + i];
		len--;
		i++;
	}
	dst[i] = '\0';
	return ((char *)dst);
}

static char	*my_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	len = length(s1);
	if (s1 != NULL)
	{
		ptr = malloc(len + 1);
		if (ptr == NULL)
			return (NULL);
		ft_strlcopy(ptr, s1, len + 1);
		return (ptr);
	}
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t				length_to_malloc;
	unsigned char		*ptr;

	if (s == NULL)
		return (NULL);
	if (start > (unsigned int)length(s))
		return (my_strdup(""));
	if (length(s) < start + len)
		length_to_malloc = length(s) - start + 1;
	else
		length_to_malloc = len + 1;
	ptr = malloc(length_to_malloc * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_substrcpy(ptr, s, len, start);
	return ((char *)ptr);
}

/*
int main(void){

    char *pointer;
    pointer = ft_substr("tripouille", 0, 42000);
    printf("%s%s\n", "new substring: ", pointer);
    printf("%s%lu\n", "length of *pointer: ", length(pointer));
    printf("%s%zu\n\n", "size_t of *pointer: ", sizeof(pointer));
    free(pointer);
    return 0;
}
*/
