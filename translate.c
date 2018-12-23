/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfahey <cfahey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 21:23:26 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/23 05:49:20 by cfahey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
**	Функция принимает тетримено в строковом формате с '\n'
**	возвращает новую тетримено без '\n' 
*/

static char	*remake(char *line)
{
	char	*res;
	int		i;
	int		j;

	res = ft_strnew(16);
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (i < 16)
	{
		res[i] = line[j];
		i++;
		j++;
		if (line[j] == '\n')
			j++;
	}
	return (res);
}

/*
**	Функция получает тетримино из reader и переводит в битовое
**	представление и возвращает в целом типе(int)
*/

int	translate(char *line, t_trio *masks)
{
	char	*map;
	int		start;
	t_trio	trio;

	map = remake(line);
	start = ft_strnchr(map, '#', 1);
	trio.c1 = ft_strnchr(map, '#', 2);
	trio.c2 = ft_strnchr(map, '#', 3);
	trio.c3 = ft_strnchr(map, '#', 4);
	trio.c1 = (trio.c1 / 4 - start / 4) * 10  + trio.c1 % 4 - start % 4;
	trio.c2 = (trio.c2 / 4 - start / 4) * 10  + trio.c2 % 4 - start % 4;
	trio.c3 = (trio.c3 / 4 - start / 4) * 10  + trio.c3 % 4 - start % 4;
	// printf("%d - %d - %d\n", trio.c1, trio.c2, trio.c3);
	free(map);
	return (check_mask(trio, masks));
}
