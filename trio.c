/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trio.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfahey <cfahey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 03:09:37 by cfahey            #+#    #+#             */
/*   Updated: 2018/12/23 03:18:37 by cfahey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trio.h"

t_trio			*trio_new(t_char c1, t_char c2, t_char c3)
{
	t_trio	*result;

	if (!(result = (t_trio *)malloc(sizeof(t_trio))))
		return (NULL);
	result->c1 = c1;
	result->c2 = c2;
	result->c3 = c3;
	return (result);
}

void			trio_del(t_trio **del)
{
	free(*del);
	*del = NULL;
}
