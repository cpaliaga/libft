/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:37:27 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/15 16:44:08 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	slen;

	slen = ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	if (slen <= (size_t)start)
		return (ft_strdup(""));
	if (slen - start < len)
		len = slen - start;
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (0);
	while (*(s + start + i) != '\0' && i < len)
	{
		*(sub + i) = *(s + start + i);
		i++;
	}
	*(sub + i) = '\0';
	return (sub);
}
