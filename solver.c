/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 19:55:28 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/21 21:46:45 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	solver(int *tetriminos)
{
	int	i;

	i = -1;
	while (tetriminos[++i])
		printf("%d ", tetriminos[i]);
	printf("\n");
}
