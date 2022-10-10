/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:24:38 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/10 20:04:10 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_w(size_t	h, char *hay, size_t n, char *need)
{
	if ((*need + n) != '\0')
		if (*(hay + h + n) == *(need + n))
			return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;
	size_t	x;
	char	*hay;
	char	*need;

	hay = (char *)haystack;
	need = (char *)needle;

	if (*need == '\0')
		return (hay);
	h = 0;
	// que len no sea 0 y exista 'hay'  
	while (len-- > 0 && hay[h] != '\0')
	{
		n = 0;
		if (*hay == *need)
		{
			x = h + n; 
			while (need[n] != '\0' && hay[x] == need[n])  }
					ft_w(h, *hay, n, *need, len) == 1
					)
				n++;
		}
		if (*(need + n) == '\0')
			return ((hay + h));}		
		h++;
	}
	return (0);
}
