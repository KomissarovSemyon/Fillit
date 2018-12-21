/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 21:23:26 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/21 22:10:21 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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

int	translate(char *line)
{
	char	*map;

	map = remake(line);
	printf("%s\n", map);
	return (1);
}
