/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:24:38 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/14 16:25:27 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;

	if (!*needle)
		return ((char *)haystack);
	len_needle = ft_strlen(needle);
	while (*haystack != '\0' && len-- > 0)
	{
		if (*haystack == *needle)
			if (!ft_strncmp(haystack, needle, len_needle))
				return ((char *)haystack);
		haystack++;
		if (len_needle > len)
			break ;
	}
	return (0);
}
