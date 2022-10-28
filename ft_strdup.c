/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:31:43 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/28 16:23:47 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;
	size_t	i;

	len = 0;
	while (*(s1 + len) != '\0')
		len++;
	i = 0;
	copy = (char *)ft_calloc((len + 1), sizeof(char));
	if (!copy)
		return (NULL);
	while (i < len)
	{
		*(copy + i) = *(s1 + i);
		i++;
	}
	*(copy + i) = '\0';
	return (copy);
}
