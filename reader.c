/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfahey <cfahey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 19:54:51 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/23 03:46:08 by cfahey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
**	Функция считывает из fd, проверяет на валидность считанные данные,
**	если тетримино не валидная, то возвращается NULL
**	если все тетримино валидные, то возвращается массив
**	битовых представлений тетримино
*/

int		*reader(fd)
{
	char	buf[FIELD_SIZE + 1];
	int		ret;
	t_trio	*masks;
	int		*result;
	int		i;

	i = 0;
	if (!(result = (int *)malloc((sizeof(int) * MAX_TETRI))))
		return (NULL);
	while ((ret = read(fd, buf, FIELD_SIZE)) != 0)
	{
		buf[ret] = '\0';
		if (!(masks = generate_masks()))
			return (NULL);
		if ((ret != 20 && ret != 21) || !check_symbols(buf, masks))
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
