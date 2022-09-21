/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:08:11 by caliaga-          #+#    #+#             */
/*   Updated: 2022/09/21 19:05:05 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "~/my_libft/libft.h"
/* #include <unistd.h>

#include <string.h>
#include <stdio.h>*/

size_t  ft_strlcat(char * dst, const char * src, size_t dstsize)
{
    size_t  i;
    size_t  s; /*20*/
    size_t  d; /*3*/ 

    i = 0;
    s = 0;
    d = 0;
    while(src[s] != '\0')
        ++s;
    while(dst[d] != '\0')
        ++d;
    if (d < dstsize|| dstsize != 0)
    {
        while ((src[i] != '\0') && i < (dstsize - d - 1))
        {
            dst[d + i] = src[i];
            i++;
        }
        dst[d + i] = '\0';
    }
    else
        return (0);
	
    return (s + d);
}

int main()
{
char	src[40] = "01234567890123456789";
char	dst[40] = "abc";
size_t	size = 20;
size_t	a = ft_strlcat(dst, src, size);
printf("\nDel original '%s' con largo '%zu' se ha copiado '%s' con largo '%zu'.", src, a , dst, size);

char	src_b[40] = "01234567890123456789";
char	dst_b[40] = "abc";
size_t	size_b = 20;
size_t 	b = strlcat(dst_b, src_b, size_b);
printf("\nB_Del original '%s' con largo '%zu' se ha copiado '%s' con largo '%zu'.", src_b, b , dst_b, size_b);

return(0);
}
