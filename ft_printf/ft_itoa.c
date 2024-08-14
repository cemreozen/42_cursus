/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:57:44 by cozen             #+#    #+#             */
/*   Updated: 2024/04/26 14:57:45 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stddef.h>

static size_t	length(const char *temp)
{
	int	i;

	i = 0;
	while (temp[i] != '\0')
		i++;
	return (i);
}

static void	*my_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	a;

	a = (unsigned char) c;
	ptr = (unsigned char *) s;
	while (n > 0)
	{
		*ptr = a;
		ptr++;
		n--;
	}
	return (s);
}

static void	i_to_string(int nb, char *s)
{
	int	divisor;

	if (nb == 0)
	{
		*s = '0';
		return ;
	}
	divisor = 1000000000;
	while (nb / divisor == 0 && nb != 0)
		divisor /= 10;
	while ((divisor != 0) && (nb / divisor >= 0))
	{
		*s = '0' + (nb / divisor);
		nb = (nb % divisor);
		divisor /= 10;
		s++;
	}
}

static void	if_nb_neg(int nb, char *s)
{
	*s = '-';
	s++;
	if (nb == -2147483648)
	{
		*s = '2';
		s++;
		nb = -(nb % 1000000000);
	}
	else
		nb = -nb;
	i_to_string(nb, s);
	nb = -nb;
}

char	*ft_itoa(int nb)
{
	size_t	len;
	char	temp[20];
	char	*result;
	int		i;

	my_memset(temp, 0, sizeof(temp));
	if (nb < 0)
		if_nb_neg(nb, temp);
	else
		i_to_string(nb, temp);
	len = length(temp);
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	my_memset(result, 0, (len + 1));
	i = 0;
	while (i < (int)len)
	{
		result[i] = temp[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int	main(void) {
    int nb = -1;
    char *s;

    s = ft_itoa(nb);
    printf("%s\n", s);
    printf("%s%ld\n", "size of string: ", sizeof(s));
    printf("%s%ld\n", "length of string: ", length(s));
    printf("%p\n", s);
    free(s);
    return (0);
}
 */
