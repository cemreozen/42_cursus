/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:40:04 by cozen             #+#    #+#             */
/*   Updated: 2024/04/25 14:40:54 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if (a >= 'a' && a <= 'z')
	{
		a -= 32;
		return ((int)a);
	}
	else
		return (c);
}
