/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:24:38 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/15 20:35:33 by caliaga-         ###   ########.fr       */
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
		{
			if (nlen > len)
				return (0);
			if (!ft_strncmp(haystack, needle, nlen))
				return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
}
