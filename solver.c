/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 19:55:28 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/25 21:38:35 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "map.h"

static int	tetriminos_count(int *tetriminos)
{
	int	i;

	i = 0;
	while (tetriminos[i] != -1)
		i++;
	return (i);
}

static void	remove_figure(char *map, int c, t_trio trio, int len)
{
	trio.c1 = ((trio.c1 / 10 * len) + (trio.c1 % 10));
	trio.c2 = ((trio.c2 / 10 * len) + (trio.c2 % 10));
	trio.c3 = ((trio.c3 / 10 * len) + (trio.c3 % 10));
	map[c] = '.';
	map[trio.c1] = '.';
	map[trio.c2] = '.';
	map[trio.c3] = '.';
}

/*
**  Функция пытается поставить фигуру в с координату
**	если может, то ставит
**	Если поставила возвращает 1, иначе 0
*/

static int	is_placable(t_map m, int c, t_trio trio, int count)
{
	int len;

	len = m.len;
	trio.c1 = ((trio.c1 / 10 * len) + (trio.c1 % 10));
	trio.c2 = ((trio.c2 / 10 * len) + (trio.c2 % 10));
	trio.c3 = ((trio.c3 / 10 * len) + (trio.c3 % 10));
	if ((c < len * len && c + trio.c1 < len * len && c + trio.c2 < len * len &&
		c + trio.c3 < len * len) && (m.map[c] == '.' && m.map[c + trio.c1] == '.' &&
		m.map[c + trio.c2] == '.' && m.map[c + trio.c3] == '.'))
	{
		if ((((c + trio.c1) % len == len - 1) || ((c + trio.c2) % len == len - 1)
			|| ((c + trio.c3) % len == len - 1)) && (((c + trio.c1) % len == 0) ||
				((c + trio.c2) % len == 0) || ((c + trio.c3) % len == 0)))
			return (0);
		else
		{
			m.map[c] = 'A' + count;
			m.map[trio.c1] = 'A' + count;
			m.map[trio.c2] = 'A' + count;
			m.map[trio.c3] = 'A' + count;
			return (1);
		}
	}
	return (0);
}

static int	brute_force(t_map map, int *tetriminos, t_trio *masks, int count)
{
	int	i;

	if (tetriminos[count] == -1)
		return (1);
	i = -1;
	while (++i < map.len)
	{
		if (is_placable(map, ++i, masks[tetriminos[count]], count))
			if (!brute_force(map, tetriminos, masks, count + 1))
				remove_figure(map.map, i, masks[tetriminos[count]], map.len);
	}
	return (0);
}

/*
**	Функция основного алгоритма
*/

void	solver(int *tetriminos, t_trio *masks)
{
	// int		i;
	t_map	map;
	int		len;

	len = tetriminos_count(tetriminos);
	map = map_create(len);
	brute_force(map, tetriminos, masks, 0);
	// map = map_create(size_map(len));
	// while (map[i])
}
