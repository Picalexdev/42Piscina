/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 15:22:36 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/16 14:51:44 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*file_open(char *filename)
{
	char	*buf;
	int		fd;

	buf = malloc(sizeof(char) * 1000);
	fd = open(filename, O_RDONLY);
	read(fd, buf, 1000);
	close(fd);
	return (buf);
}

void	error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}
