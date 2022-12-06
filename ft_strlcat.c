/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:08:11 by caliaga-          #+#    #+#             */
/*   Updated: 2022/12/06 15:38:48 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_s;
	size_t	len_d;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (!src)
		len_s = 0;
	if (dstsize == 0)
		return (len_s);
	if (dstsize < len_d)
		len_s = ft_strlen(src) + dstsize;
	else
		len_s = ft_strlen(src) + len_d;
	i = -1;
	if (dst != NULL)
	{
		while (src[++i] != '\0' && (len_d + i) < dstsize - 1)
			dst[len_d + i] = src[i];
		dst[len_d + i] = '\0';
	}
	return (len_s);
}
