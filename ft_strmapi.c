/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:37:30 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/01 17:38:02 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*new;

	if (s == 0)
		return (0);
	len = 0;
	while (*(s+len) != '\0')
		len++;
	i = 0;
	new = malloc((len + 1) * sizeof(char));
	if (new == 0)
		return (0);
	
	while (i < len)
	{
		*(new + i) = f(i, *(s + i));
		i++;
	}
	*(new + i) = '\0';
	return (new);
}
