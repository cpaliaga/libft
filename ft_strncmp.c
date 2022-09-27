/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:02:38 by caliaga-          #+#    #+#             */
/*   Updated: 2022/09/27 20:04:48 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
 
	i = 0;
	while(i < n && ((unsigned char)*(s1+i) != '\0' || (unsigned char)*(s2+i) != '\0'))
	{
		if ((unsigned char)*(s1+i) != (unsigned char)*(s2+i))
			return ((unsigned char)*(s1+i) - (unsigned char)*(s2+i));
		i++;
	}
	return (0);
}
