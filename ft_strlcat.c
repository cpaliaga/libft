/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:08:11 by caliaga-          #+#    #+#             */
/*   Updated: 2022/12/12 15:42:22 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_s;
	size_t	len_d;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	i = 0;
	if (dstsize != 0 && len_d < dstsize)
	{
		while ((src[i] != '\0') && i < (dstsize - len_d - 1))
		{
			*(dst + len_d + i) = *(src + i);
			i++;
		}
		*(dst + len_d + i) = '\0';
	}
	if (len_d >= dstsize)
		return (len_s + dstsize);
	return (len_s + len_d);
}
