/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfahey <cfahey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 20:46:21 by cfahey            #+#    #+#             */
/*   Updated: 2018/12/21 21:09:33 by cfahey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int			check_symbols(char *buf)
{
	int		i;

	i = 0;
	if (!buf)
		return (0);
	while (i < 20)
	{
		if ((i + 1) % 5 == 0 && buf[i] != '\n')
			return (0);
		if ((buf[i] != '#' && buf[i] != '.') && ((i + 1) % 5 != 0))
			return (0);
		i++;
	}
	if (buf[i] != '\n' && buf[i] != '\0')
		return (0);
	return (1);
}
