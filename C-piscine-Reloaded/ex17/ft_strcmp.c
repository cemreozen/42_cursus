/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 10:31:52 by cozen             #+#    #+#             */
/*   Updated: 2024/04/18 10:31:55 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

/*
int	main(void)
{
	char *string1;
	char *string2;

	string1 = "ABCDEF";
	string2 = "aBCDEF";
	printf("%i\n", ft_strcmp(string1, string2));
	return (0);
}
*/
