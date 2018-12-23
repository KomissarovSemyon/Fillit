/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfahey <cfahey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 20:46:21 by cfahey            #+#    #+#             */
/*   Updated: 2018/12/23 03:46:23 by cfahey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trio.h"

/*
**	Проверка на то что считанная тетримино валидная
*/

int			check_symbols(char *buf, t_trio *masks)
{
	int		i;
	int		hash;

	i = 0;
	hash = 0;
	if (!buf)
		return (0);
	while (i < 20)
	{
		if (buf[i] == '#')
			hash++;
		if ((i + 1) % 5 == 0 && buf[i] != '\n')
			return (0);
		if ((buf[i] != '#' && buf[i] != '.') && ((i + 1) % 5 != 0))
			return (0);
		i++;
	}
	if ((buf[i] != '\n' && buf[i] != '\0') || hash != 4)
		return (0);
	return (1);
}

t_trio		*generate_masks(void)
{
	t_trio		*res;

	if (!(res = (t_trio *)malloc(sizeof(t_trio) * 19)))
		return (NULL);
	trio_set(res[0], 10, 20, 30);
	trio_set(res[1], 1, 2, 3);
	trio_set(res[2], 1, 10, 11);
	trio_set(res[3], 10, 11, 21);
	trio_set(res[4], 9, 10, 19);
	trio_set(res[5], 1, 9, 10);
	trio_set(res[6], 1, 11, 12);
	trio_set(res[7], 9, 10, 11);
	trio_set(res[8], 1, 2, 11);
	trio_set(res[9], 9, 10, 20);
	trio_set(res[10], 10, 11, 20);
	trio_set(res[11], 10, 11, 12);
	trio_set(res[12], 1, 2, 10);
	trio_set(res[13], 10, 20, 21);
	trio_set(res[14], 1, 10, 20);
	trio_set(res[15], 1, 2, 12);
	trio_set(res[16], 8, 9, 10);
	trio_set(res[17], 10, 19, 20);
	trio_set(res[18], 1, 11, 21);
	return (res);
}