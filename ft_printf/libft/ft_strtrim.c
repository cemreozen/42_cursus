/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:38:58 by cozen             #+#    #+#             */
/*   Updated: 2024/04/26 18:54:38 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

static size_t	length(char const *string)
{
	size_t	len;

	len = 0;
	while (string[len] != '\0')
		len++;
	return (len);
}

static int	set_cmp(char const c, char const *s)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

static void	ft_strncopy(char const *src, char *dst, size_t n)
{
	while (n && *src)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
}

char	*ft_strtrim(char const *s, char const *set)
{
	char const	*s_end;
	char		*array;
	size_t		trimmed_length;

	s_end = s + length(s) - 1;
	while (set_cmp(*s, set))
		s++;
	while (set_cmp(*s_end, set) && s_end > s)
		s_end--;
	trimmed_length = s_end - s + 1;
	array = (char *)malloc(trimmed_length + 1);
	if (array == NULL)
		return (NULL);
	ft_strncopy(s, array, trimmed_length);
	array[trimmed_length] = '\0';
	return (array);
}
