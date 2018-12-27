/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 19:35:24 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/27 05:11:51 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define MAX_TETRI 26
# define FIELD_SIZE 21

# include "libft/libft.h"
# include "trio.h"
# include <fcntl.h>

int		*reader(int fd, t_trio **masks);
void	solver(int *tetriminos, t_trio *masks);
int		translate(char *map, t_trio *masks);
int		check_symbols(char *buf);
int		check_mask(t_trio coord, t_trio *masks);
t_trio	*generate_masks(void);
int		tetriminos_count(int *tetriminos);

#endif
