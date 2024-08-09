/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:55:04 by cozen             #+#    #+#             */
/*   Updated: 2024/04/26 15:56:14 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static size_t	length(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

static char	*my_strcat(char *dest, const char *source)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (source[j] != '\0')
		dest[i++] = source[j++];
	dest[i] = '\0';
	return (dest);
}

static char	*ft_strcopy(char *dst, char const *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len1;
	size_t	len2;
	size_t	totallen;

	len1 = length(s1);
	len2 = length(s2);
	totallen = len1 + len2 + 1;
	ptr = (char *)malloc(totallen);
	if (ptr == NULL)
		return (NULL);
	ft_strcopy(ptr, s1);
	my_strcat(ptr, s2);
	*(ptr + totallen - 1) = '\0';
	return (ptr);
}

/*
int main(void)
{
    char *pointer;
    char *string1;
    char *string2;

    string1 = "Hello with ";
    string2 = "the pudding!";
    pointer = ft_strjoin(string1, string2);
    printf("%s%s\n", "joined string: ", pointer);
    free(pointer);
    return (0);
}
 */
