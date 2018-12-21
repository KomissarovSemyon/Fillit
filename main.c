/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 18:52:52 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/21 19:56:45 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int	fd;
	int	*tetriminos;

	if (argc != 2)
		PRINT_ERROR
	else
	{
		fd = open(argv[1], O_RDONLY);
		tetriminos = reader(fd);
		close(fd);
		if (!tetriminos)
			PRINT_ERROR
		else
			solver(tetriminos);
	}
	return (0);
}