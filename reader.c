/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfahey <cfahey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 19:54:51 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/21 21:13:03 by cfahey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*reader(fd)
{
	// char	*line;
	char	buf[FIELD_SIZE + 1];
	int		ret;
	int		check;

	ret = read(fd, buf, FIELD_SIZE);
	if (ret != 20 && ret != 21)
		return (NULL);
	buf[ret] = '\0';
	if ((check = check_symbols(buf)) == 0)
		return (NULL);
	printf("%d\n", ret);
	return (NULL);
}
