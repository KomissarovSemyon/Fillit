/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 19:20:14 by cfahey            #+#    #+#             */
/*   Updated: 2018/12/25 17:05:34 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "trio.h"
#include "map.h"

t_map	map_create(int len)
{
	t_map	map;
	int		size;

	size = size_map(len);
	map.map = (char *)malloc(sizeof(char) * (size + 1));
	map.len = len;
	map.map[size] = '\0';
	while (--size >= 0)
		map.map[size] = '.';
	return (map);
}

int		size_map(int i)
{
	int		j;

	j = 1;
	while (j * j < i * 4)
		j++;
	return (j * j);
}

int		print_map(t_map map)
{
	int	i;

	i = -1;
	while (++i < map.len)
	{
		write(1, map.map, map.len * i);
		write(1, "\n", 1);
	}
	return (1);
}
