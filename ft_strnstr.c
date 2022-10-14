/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:24:38 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/14 15:44:08 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0' || *haystack == *needle)
		return ((char *)haystack);
	else if (ft_strlen(haystack) < ft_strlen(needle))
		return (0);
	else if ()
	else
	{
		while ((ft_strlen(needle) <= len--) && *haystack)
		{
			if (!ft_strncmp((char*)haystack, (char *)needle, ft_strlen(needle)))
				return ((char *)haystack);
			haystack++;
		}
	}
	return (0);
}
