/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 19:54:51 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/21 21:47:05 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*reader(fd)
{
	char	buf[FIELD_SIZE + 1];
	int		ret;
	int		check;
	int		*result;
	int		i;

	i = 0;
	if (!(result = (int *)malloc((sizeof(int) * MAX_TETRI))))
		return (NULL);
	while ((ret = read(fd, buf, FIELD_SIZE)) != 0)
	{
		buf[ret] = '\0';
		if ((ret != 20 && ret != 21) || ((check = check_symbols(buf)) == 0))
		{
			free(result);
			return (NULL);
		}
		result[i] = translate(buf);
		i++; 
	}
	result[i] = 0;
	return (result);
}
