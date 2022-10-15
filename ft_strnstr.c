/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:24:38 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/15 20:15:26 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;

	nlen = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack != '\0' && len-- > 0)
	{
		if (*haystack == *needle)
			if (!ft_strncmp(haystack, needle, nlen))
				return ((char *)haystack);
		if ((unsigned int)nlen > (unsigned int)len)
			return (0);
		haystack++;
	}
	return (0);
}
