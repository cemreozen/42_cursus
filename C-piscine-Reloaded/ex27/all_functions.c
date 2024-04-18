/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cozen <cozen@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:42:08 by cozen             #+#    #+#             */
/*   Updated: 2024/04/18 16:42:11 by cozen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#define BUFFER_SIZE 4096

void	ft_putstr(char *c)
{
	while (*c)
	{
		write(1, c, 1);
		c++;
	}
}

void	error_message(int errcode)
{
	char	*error1;
	char	*error2;
	char	*error3;

	error1 = "File name missing.\n";
	error2 = "Too many arguments.\n";
	error3 = "Cannot read file.\n";
	if (errcode == 1)
		ft_putstr(error1);
	if (errcode > 2)
		ft_putstr(error2);
	if (errcode == -1)
		ft_putstr(error3);
}

int	file_open(int argc, char **argv)
{
	int	fd;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		error_message(-1);
		return (-1);
	}
	else
		return (fd);
}

ssize_t	file_read(int argc, char **argv, char *buffer)
{
	int			fd;

	fd = file_open(argc, argv);
	if (fd != -1)
		return (read(fd, buffer, BUFFER_SIZE));
	return (-1);
}

int	file_writer_stdout(int argc, char **argv, char *buffer)
{
	int		fd;
	ssize_t	bytes_read;

	bytes_read = file_read(argc, argv, buffer);
	fd = file_open(argc, argv);
	if (fd == -1 || bytes_read == -1)
	{
		if (bytes_read == -1)
			error_message(-1);
		close(fd);
		return (-1);
	}
	if (bytes_read > 0)
	{
		if (write(STDOUT_FILENO, buffer, bytes_read) != bytes_read)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (0);
}
