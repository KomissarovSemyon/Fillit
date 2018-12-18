/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:39:30 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/18 11:32:38 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long long int	res;
	int				sign;
	int				i;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	str[i] == '-' ? sign = -1 : (0);
	str[i] == '+' ? sign = 1 : (0);
	str[i] == '+' || str[i] == '-' ? i++ : (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res * 10 / 10 != res)
			return (sign > 0 ? -1 : 0);
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}
