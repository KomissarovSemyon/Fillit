/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trio.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfahey <cfahey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 02:57:43 by cfahey            #+#    #+#             */
/*   Updated: 2018/12/23 03:40:48 by cfahey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIO_H
# define TRIO_H
# include "fillit.h"

typedef unsigned char	t_char;

typedef struct			s_trio
{
	t_char				c1;
	t_char				c2;
	t_char				c3;
}						t_trio;

void					trio_set(t_trio set, t_char c1, t_char c2, t_char c3);

#endif
