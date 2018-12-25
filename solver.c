/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfahey <cfahey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 19:55:28 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/25 12:43:41 by cfahey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "map.h"

/*
**	Функция основного алгоритма
*/

void	solver(int *tetriminos, t_trio *masks)
{
	int	i;

	i = -1;
	(void) masks;
	while (tetriminos[++i] != -1)
		printf("%d ", tetriminos[i]);
	printf("\n");
	(void)tetriminos;
}
