/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:37:19 by caliaga-          #+#    #+#             */
/*   Updated: 2022/09/20 17:59:23 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <string.h>
#include <stdio.h>

size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  i;
    size_t  s;

    i = 0;
    s = 0;
   
    while(src[s] != '\0')
        ++s;
    if (dstsize > 0)
    {
        while((src[i] != '\0') && (i < dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (s);
}

int main()
{
	char	src[21] = "01234567890123456789";
    char	dst[21] = "";
    size_t	size = -4;
	size_t	a = ft_strlcpy(dst, src, size);
	printf("\nDel original '%s' con largo '%zu' se ha copiado '%s' con largo '%zu'.\n", src, a , dst, size);
    
	char	src_b[21] = "01234567890123456789";
    char	dst_b[21] = "";
    size_t	size_b = 4;
    size_t 	b = strlcpy(dst_b, src_b, size_b);
	printf("\nB_Del original '%s' con largo '%zu' se ha copiado '%s' con largo '%zu'.\n", src_b, b , dst_b, size_b);

    return(0);
}
