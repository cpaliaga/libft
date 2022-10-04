/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:37:27 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/04 16:20:31 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	start_copy;

	start_copy = ((size_t)start);
	sub = malloc((len + 1) * sizeof(char));
	if (s == 0 || sub == 0)
		return (0);
	i = 0;
	while (i < len && start_copy < ft_strlen(s))
	{
		*(sub + i) = *((s + start_copy) + i);
		i++;
	}
	*(sub + i) = '\0';
	return (sub);
}
