/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 04:53:42 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/27 05:11:47 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "trio.h"
#include "map.h"
#include "fcntl.h"
#include "libft/libft.h"
#include "unistd.h"
#include "stdlib.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		*tetriminos;
	t_trio	*masks;

	masks = NULL;
	if (argc != 2)
		ft_putstr("error\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		tetriminos = reader(fd, &masks);
		close(fd);
		if (!tetriminos)
			ft_putstr("error\n");
		else
			solver(tetriminos, masks);
		free(tetriminos);
		free(masks);
	}
	return (0);
}
