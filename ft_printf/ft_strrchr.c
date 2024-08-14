/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:45:37 by cozen             #+#    #+#             */
/*   Updated: 2024/04/25 14:46:39 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char		a;
	const char	*end;

	a = (char) c;
	end = s;
	while (*end != '\0')
		end++;
	if (a == '\0')
		return ((char *)end);
	while (end >= s)
	{
		if (*end == a)
			return ((char *)end);
		end--;
	}
	return (NULL);
}
