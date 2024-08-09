/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 17:47:52 by cozen             #+#    #+#             */
/*   Updated: 2024/04/26 17:47:53 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	length_to_split(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

static int	split_count(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0' && *s != c)
			count++;
		while (*s != '\0' && *s != c)
			s++;
	}
	return (count);
}

static char	**copy_split_word(char **split, char c,
		const char *s, size_t n_split)
{
	size_t	i;

	while (*s != '\0' && *s == c)
		s++;
	i = 0;
	while (i < n_split)
	{
		while (*s != '\0' && *s == c)
			s++;
		split[i] = ft_substr(s, 0, length_to_split(s, c));
		if (split[i] == NULL)
		{
			while (i > 0)
			{
				free(split[i - 1]);
				i--;
			}
			free (split);
			return (NULL);
		}
		s = s + length_to_split(s, c);
		i++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(const char *s, char c)
{
	size_t	nb_split;
	char	**split;

	nb_split = split_count(s, c);
	split = malloc((nb_split + 1) * sizeof (char *));
	if (split == NULL)
		return (NULL);
	return (copy_split_word(split, c, s, nb_split));
}

/*
int	main(void)
{
	char	s[] = "hello!";
	int	i;
	char	**array;

	array = ft_split(s, ' ');
	i = 0;
	while (array[i] != NULL)
	{
		printf("%p\t%s\n", array[i], array[i]);
		free(array[i]);
		i++;
	}
	printf("%p\t%s\n", array[i], array[i]);
	free(array[i]);
	free(array);
}*/
