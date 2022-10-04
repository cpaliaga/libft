/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:53:54 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/04 16:41:32 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	if (c == '\0')
		return ((char *)(s + len));
	while (--len >= 0)
		if (*(s + len) == c)
			return ((char *)(s + len));
	return (0);
}
