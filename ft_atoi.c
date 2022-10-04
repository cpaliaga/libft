/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:25:51 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/04 17:10:51 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	res;
	int			sign;
	const char	*pointer;

	res = 0;
	sign = 1;
	pointer = str;
	while (*pointer == ' ' || (*pointer >= 9 && *pointer <= 13))
		pointer++;
	if (*pointer == '-')
	{
		sign *= -1;
		pointer++;
	}
	else if (*pointer == '+')
		pointer++;
	while (*pointer >= '0' && *pointer <= '9')
	{
		res = (res * 10) + (*pointer - '0');
		pointer++;
	}
	return ((int)(res * sign));
}
