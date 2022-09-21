/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:48:37 by caliaga-          #+#    #+#             */
/*   Updated: 2022/09/21 20:07:14 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	if (len > 0)
	{
		while (len--)
		{
			*(unsigned char *)(b + len) = (unsigned char)c;
		}
	}
	return (b);
}

int	main ()
{
	char	src[40] = "01234567890123456789";
	char	c1 = 'a';
	size_t	size = 10;
	ft_memset(src, c1, size);
	printf("\nDel original '%s' con letra '%c' se ha copiado '%zu'.", src, c1, size);

	char	src_b[40] = "01234567890123456789";
	char	c2 = 'b';
	size_t	size_b = 10;
	memset(src_b, c2, size_b);
	printf("\nDel original '%s' con letra '%c' se ha copiado '%zu'.", src_b, c2, size_b);
	return(0);
}
