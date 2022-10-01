/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:07:28 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/01 17:08:05 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_size(int n)
{
	int size;

	size = 0;
	if (n == -2147483648)
		n = n + 1;
	if (n < 0)
	{
		size = size + 1;
		n = n * -1;
	}
	while (n / 10 > 0)
	{
		size = size + 1;
		n = n / 10;
	}
	size = size + 1;
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*s;
	int		i;

	s = malloc((ft_size(n) + 1) * sizeof(char));
	if (s == 0)
		return (0);
	i = 0;
	if (n < 0)
	{
		s[i] = '-';
		i++;
	}
	s[ft_size(n)] = '\0';
	size = ft_size(n) - 1;
	while (size >= i)
	{
		if (n < 0)
			s[size] = (n % 10) * -1 + 48;
		else
			s[size] = n % 10 + 48;
		n = n / 10;
		size--;
	}
	return (s);
}

