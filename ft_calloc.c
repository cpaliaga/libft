/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:22:16 by caliaga-          #+#    #+#             */
/*   Updated: 2022/12/02 19:07:35 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	len;

	len = (count * size);
	if (len < count && len < size)
		return (NULL);
	if (len > SIZE_MAX)
		return (NULL);
	str = malloc(len);
	if (!str)
		return (NULL);
	ft_bzero(str, len);
	return (str);
}
