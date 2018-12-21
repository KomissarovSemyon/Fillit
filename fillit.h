/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfahey <cfahey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 19:35:24 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/21 21:10:21 by cfahey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define MAX_TETRI 26
# define FIELD_SIZE 21
# define PRINT_ERROR ft_putstr("error\n");

# include "libft/libft.h"
# include <fcntl.h>
# include <stdio.h> // DELETE THIS!!!

int		*reader(int fd);
void	solver(int *tetriminos);
int		check_symbols(char *buf);


#endif
