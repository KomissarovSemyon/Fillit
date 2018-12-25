/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfahey <cfahey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 19:20:14 by cfahey            #+#    #+#             */
/*   Updated: 2018/12/25 11:15:39 by cfahey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "trio.h"

char	*map_creat(int size)
{
	char	*buf;

	buf = (char *)malloc(sizeof(char) * size + 1);
	buf[size +1] = '\0';
	while (size-- >= 0)
		buf[size] = '.';
	return (buf);
}

int		size_map(i)
{
	int		j;

	j = 1;
	while (j * j <= i * 10)
		j++;
	return (j * j);
}
