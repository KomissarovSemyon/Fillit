/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 21:23:26 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/22 10:44:51 by amerlon-         ###   ########.fr       */
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

int	translate(char *line)
{
	char	*map;

	map = remake(line);
	printf("%s\n", map);
	return (1);
}
