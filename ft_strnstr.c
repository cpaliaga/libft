/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:24:38 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/06 09:29:36 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_w(size_t	h, char *hay, size_t n, char *need, size_t len)
{
	if ((*need + n) != '\0')
		if ((h + n) < len)
			if (*(hay + h + n) == *(need + n))
				return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;
	char	*hay;
	char	*need;

	hay = (char *)haystack;
	need = (char *)needle;
	if (*need == '\0')
		return (hay);
	h = 0;
	while (*(hay + h) != '\0')
	{
		n = 0;
		if (*(hay + h) == *need)
		{
			while (ft_w(h, hay, n, need, len) == 1)
				n++;
			if (need[n] == '\0')
				return (hay + h);
		}
		h++;
	}
	return (0);
}
