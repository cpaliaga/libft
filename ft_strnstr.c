/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:24:38 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/11 18:24:51 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_len(const char *str)
{
	size_t a;

	a = 0;
	while (*(str + a) != '\0')
		a++;
	return (a);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;
	size_t	len_need;

	len_need = ft_len(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	h = 0;
	while (*(haystack + h) != '\0' && h <= len)
	{
		n = 0;
		if (*(haystack + h) == *needle)
		{
			while (n < len_need)
			{
			    if (*(haystack + h + n) == *(needle + n))
					if (h + n < len)
						if (*(needle + n) != '\0')
							n++;
			}
			if (*(needle + n) == '\0')
				return ((char *)(haystack + h));
		}
		h++;
	}
	return (0);
}

int main()
{
    printf("%s", ft_strnstr("En un lugar","un",6));
    printf("%s", ft_strnstr("En un lugar","",6));
    printf("%s", ft_strnstr("","un",6));
    printf("%s", ft_strnstr("En un lugar","un",0));
	printf("%s \n", ft_strnstr("MZIRIBMZIRIBMZE123","MZIRIBMZE",strlen("MZIRIBMZE")));
    printf("%s", strnstr("En un lugar","un",6));
    printf("%s", strnstr("En un lugar","",6));
    printf("%s", strnstr("","un",6));
    printf("%s", strnstr("En un lugar","un",0));
	printf("%s \n", strnstr("MZIRIBMZIRIBMZE123","MZIRIBMZE",strlen("MZIRIBMZE")));

    return 0;
}
