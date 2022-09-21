/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:08:11 by caliaga-          #+#    #+#             */
/*   Updated: 2022/09/20 20:15:54 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <string.h>
#include <stdio.h>

size_t  strlcat(char * dst, const char * src, size_t dstsize)
{
    size_t  i;
    size_t  s;
    size_t  d;

    i = 0;
    s = 0;
    d = 0;
    while(src[s] != '\0')
        ++s;
    while(src[d] != '\0')
        ++d;
    if (dstsize > 0)
    {
        while((src[i] != '\0') && (i < dstsize - 1))
        {
            dst[d + i] = src[i];
            i++;
        }
        dst[d + i] = '\0';
    }
    return (s + d);
}


