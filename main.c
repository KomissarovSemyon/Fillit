/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfahey <cfahey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 18:52:52 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/23 05:14:52 by cfahey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int	fd;
	int	*tetriminos;

	if (argc != 2)
	// 	PRINT_ERROR
	// else
	{
		(void ) argv;
		fd = open("tests/test", O_RDONLY);
		tetriminos = reader(fd);
		close(fd);
		if (!tetriminos)
			PRINT_ERROR
		else
			solver(tetriminos);
	}
	return (0);
}
