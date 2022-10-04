/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:22:16 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/04 15:35:03 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	i = -1;
	str = (char *)malloc(count * size);
	if (str == 0)
		return (0);
	while (++i < count * size)
		*(str + i) = 0;
	return ((void *)str);
}
