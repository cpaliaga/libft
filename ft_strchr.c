/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:35:40 by caliaga-          #+#    #+#             */
/*   Updated: 2022/09/27 19:45:33 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
    int	len;

	len = 0;
	while (*(s + len) != '\0')
		len++;

	i = 0;
	if (c == '\0')
		return ((char *) s + len);
	
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (char)c)
			return ((char *) s + i);
		i++;
	}
	return (0);
}
