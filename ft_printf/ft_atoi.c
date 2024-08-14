/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:31:42 by cozen             #+#    #+#             */
/*   Updated: 2024/04/25 14:33:13 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

static int	skip_ws(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		result;
	int		i;

	sign = 1;
	result = 0;
	if (str[0] == '\0')
		return (0);
	i = skip_ws(str);
	if (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (result * sign > INT_MAX || result * sign < INT_MIN)
		return (0);
	return (sign * result);
}

/*
int	main(void)
{
	const char	*i =  " \t\v\n\r\f123";
	int			a;

	a = ft_atoi(i);
	return (0);
}
 */
