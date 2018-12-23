/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfahey <cfahey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 19:35:24 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/23 05:38:12 by cfahey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define MAX_TETRI 26
# define FIELD_SIZE 21
# define PRINT_ERROR ft_putstr("error\n");

# include "libft/libft.h"
# include "trio.h"
# include <fcntl.h>
# include <stdio.h> // DELETE THIS!!!

int		*reader(int fd);
void	solver(int *tetriminos);
int		translate(char *map, t_trio *masks);
int		check_symbols(char *buf);
int		check_mask(t_trio coord, t_trio *masks);
t_trio	*generate_masks(void);

#endif
