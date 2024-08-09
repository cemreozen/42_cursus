/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:59:04 by cozen             #+#    #+#             */
/*   Updated: 2024/04/25 14:59:37 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static size_t	length(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	len = length(s1);
	if (s1 != NULL)
	{
		ptr = malloc(len + 1);
		if (ptr == NULL)
			return (NULL);
		ft_strlcpy(ptr, s1, len + 1);
		return (ptr);
	}
	return (NULL);
}
