/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:34:48 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/15 18:00:25 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*mem;
	unsigned char	*out;

	if (dst != src)
	{
		if (dst < src)
			ft_memcpy(dst, src, len);
		else
		{
			mem = (unsigned char *)src + len - 1;
			out = dst + len - 1;
			while (len--)
				*out-- = *mem--;
		}
	}
	return (dst);
}
