/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:25:12 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/04 16:22:09 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strim;
	size_t	start;
	size_t	end;

	if (s1 == 0 || set == 0)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (start < ft_strlen(s1) && ft_isset(s1[start], set) == 1)
		start++;
	while (end > 0 && ft_isset(s1[end], set) == 1)
		end--;
	if (start == ft_strlen(s1))
	{
		strim = malloc(1 * sizeof(char));
		strim[0] = '\0';
	}
	else
		strim = ft_substr(s1, ((unsigned int)start), (end - start + 1));
	return (strim);
}
