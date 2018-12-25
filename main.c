/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfahey <cfahey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 18:52:52 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/25 11:59:23 by cfahey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int	fd;
	int	*tetriminos;
	char	*masks;

	masks = NULL;
	if (argc != 2)
	// 	PRINT_ERROR
	// else
	{
		(void ) argv;
		fd = open("tests/test", O_RDONLY);
		tetriminos = reader(fd, &masks);
		close(fd);
		if (!tetriminos)
			PRINT_ERROR
		else
			solver(tetriminos);
	}
	return (0);
}
