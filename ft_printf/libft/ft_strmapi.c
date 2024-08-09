/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:46:49 by cozen             #+#    #+#             */
/*   Updated: 2024/04/26 15:47:37 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static size_t	length(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*a;

	a = malloc(length(s) + 1);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		a[i] = (f)(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}

/*
int main(void)
{
    char *s;

    s = "ABCDEF!";
    printf("%s\n", ft_strmapi(s, &ft_iterate));
    return(0);
}
*/
//
// Created by Cemre Özen on 04.04.24.
//
