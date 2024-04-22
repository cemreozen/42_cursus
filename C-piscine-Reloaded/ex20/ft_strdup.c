/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:32:19 by cozen             #+#    #+#             */
/*   Updated: 2024/04/18 10:32:20 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	if (src != NULL)
	{
		dest = (char *)malloc(ft_strlen(src) + 1);
		if (dest == NULL)
		{
			return (NULL);
		}
		i = 0;
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	else
		return (NULL);
}

/*
int	main(void)
{
	char	*string;
	char	*dest;
	
	string = "a computer that would talk to you";
	dest  = ft_strdup(string);
	printf("%s\n", ft_strdup(string));
	printf("%p\n", string);
	printf("%p\n", dest);
	free(dest);
	return (0);
}
*/
