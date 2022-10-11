/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:24:38 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/11 16:01:09 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;
	size_t	len_need;

	len_need = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	h = 0;
	while (*(haystack + h) != '\0' && h <= len)
	{
		n = 0;
		if (*(haystack + h) == *needle)
		{
			while (n < len_need)
			{
			    if (*(haystack + h + n) == *(needle + n))
			        if (*(needle + n) != '\0')
			            n++;
			}
			if (*(needle + n) == '\0')
				return ((char *)(haystack + h));
		}
		h++;
	}
	return (0);
}
