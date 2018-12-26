/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trio.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 03:09:37 by cfahey            #+#    #+#             */
/*   Updated: 2018/12/27 00:30:00 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trio.h"
#include "fillit.h"

void		trio_set(t_trio *set, t_char c1, t_char c2, t_char c3)
{
	set->c1 = c1;
	set->c2 = c2;
	set->c3 = c3;
}

t_trio		trio_transform(t_trio t, int len, int c)
{
	t_trio	res;

	// printf("(%d, %d, %d, %d)->", c, t.c1, t.c2, t.c3);
	// printf("(%d, %d, ", c, ((t.c1 + 3) / 10 * len) + c % len - (t.c1 + 3) / 10 * 10 + t.c1);
	// printf("%d, ", ((t.c2 + 3) / 10 * len) + c % len - (t.c2 + 3) / 10 * 10 + t.c2);
	// printf("%d)\n", ((t.c3 + 3) / 10 * len) + c % len - (t.c3 + 3) / 10 * 10 + t.c3);
	res.c1 = (c / len * len + ((t.c1 + 3) / 10 * len) + (c % len - ((t.c1 + 3) / 10 * 10 - t.c1)));
	res.c2 = (c / len * len + ((t.c2 + 3) / 10 * len) + (c % len - ((t.c2 + 3) / 10 * 10 - t.c2)));
	res.c3 = (c / len * len + ((t.c3 + 3) / 10 * len) + (c % len - ((t.c3 + 3) / 10 * 10 - t.c3)));
	c = 0;
	return (res);
}
