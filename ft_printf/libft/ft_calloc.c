/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:36:22 by cozen             #+#    #+#             */
/*   Updated: 2024/04/25 14:36:26 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <stddef.h>

static void	*ft_memset(void *s, int c, size_t n)
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

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, size * count);
	return (ptr);
}
/*
int main(void)
{
    void *pointer;

    pointer = ft_calloc(0, 0);
    if (pointer != NULL)
    {
        printf("%s\n", "Memory allocation successful.");
        printf("%s%p\n", "Address of *pointer ", &pointer);
        printf("%s%zu\n", "size of *pointer: ", sizeof(pointer));
       // printf("%zu\n", SIZE_MAX);
    }
    else
        printf("%s\n", "Memory allocation failed");
    free(pointer);
    return 0;
}*/
