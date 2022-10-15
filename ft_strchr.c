/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:35:40 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/15 13:06:52 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len;

	len = ft_strlen(s);
	i = 0;
	if ((unsigned char)c == '\0')
		return ((char *) s + len);
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (unsigned char)c)
			return ((char *) s + i);
		i++;
	}
	return (0);
}
