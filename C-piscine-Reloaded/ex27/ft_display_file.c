/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:50:01 by cozen             #+#    #+#             */
/*   Updated: 2024/04/18 13:59:31 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#define BUFFER_SIZE 4096

int	main(int argc, char **argv)
{
	char		buffer[BUFFER_SIZE];

	if (argc != 2)
	{
		error_message(argc);
		return (1);
	}
	else
	{
		return (file_writer_stdout(argc, argv, buffer));
	}
}
