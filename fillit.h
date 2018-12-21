/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 19:35:24 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/21 19:54:20 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define MAX_TETRI 26
# define PRINT_ERROR ft_putstr("error\n");

# include "libft/libft.h"
# include <fcntl.h>

int		*reader(int fd);
void	solver(int *tetriminos);

#endif
