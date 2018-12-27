/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 12:39:36 by cfahey            #+#    #+#             */
/*   Updated: 2018/12/27 04:37:00 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

typedef struct	s_map
{
	char		*map;
	int			len;
}				t_map;

t_map			map_create(int size, int offset);
int				size_map(int i);
int				print_map(t_map map);

#endif
