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
	char			*snew;

	if (s == 0)
		return (0);
	len = ft_strlen(s);
	i = 0;
	snew = malloc((len + 1) * sizeof(char));
	if (snew == 0)
		return (0);
	while (i < len)
	{
		snew[i] = f(i, s[i]);
		i++;
	}
	snew[i] = '\0';
	return (snew);
}
