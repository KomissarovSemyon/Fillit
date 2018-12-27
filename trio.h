/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trio.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 02:57:43 by cfahey            #+#    #+#             */
/*   Updated: 2018/12/27 04:33:36 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRIO_H
# define TRIO_H

typedef unsigned char	t_char;

typedef struct			s_trio
{
	t_char				c1;
	t_char				c2;
	t_char				c3;
}						t_trio;

void					trio_set(t_trio *set, t_char c1, t_char c2, t_char c3);
t_trio					trio_transform(t_trio t, int len, int c);

#endif
