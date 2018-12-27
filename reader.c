/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 19:54:51 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/26 23:27:57 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*free_arr(int *arr)
{
	free(arr);
	return (NULL);
}

/*
**	Функция считывает из fd, проверяет на валидность считанные данные,
**	если тетримино не валидная, то возвращается NULL
**	если все тетримино валидные, то возвращается массив
**	битовых представлений тетримино
*/

int		*reader(int fd, t_trio **masks)
{
	char	buff[FIELD_SIZE + 1];
	int		ret;
	int		*result;
	int		i;

	i = 0;
	if (!(result = (int *)malloc(sizeof(int) * (MAX_TETRI + 1))))
		return (NULL);
	if (!(*masks = generate_masks()))
		return (free_arr(result));
	while ((ret = read(fd, buff, FIELD_SIZE)) != 0 && i != 27)
	{
		buff[ret] = '\0';
		if ((ret != 20 && ret != 21) || !check_symbols(buff) ||
			(result[i] = translate(buff, *masks)) == -1)
			return (free_arr(result));
		i++; 
	}
	if (i == 27 || ft_strlen(buff) != 20)
		return (free_arr(result));
	result[i] = -1;
	return (result);
}
