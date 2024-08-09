/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:49:45 by cozen             #+#    #+#             */
/*   Updated: 2024/05/02 18:50:04 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] != '\0'
			&& haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	haystack[30] = "aaabcabcd";
	char	needle[10] = "aabc";
	char	*empty = (char *)"";
	char	*result1, *result2;
	result1 = ft_strnstr(haystack, "cd", 8);
	result2 = ft_strnstr(haystack, "abcd", 9);
	printf("%s", result1);
	printf("%s", result2);

}
*/
