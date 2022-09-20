/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:55:33 by caliaga-          #+#    #+#             */
/*   Updated: 2022/09/18 13:55:47 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int		ft_isprint(int c)
{
	if (c >= 32 && c <=126)
		return (1);
	return (0);
}

int main()
{
	printf("%d", ft_isprint('A'));
	printf("%d", ft_isprint('3'));
	printf("%d", ft_isprint('\n'));
	printf("%d", ft_isprint(65));
	printf("%d", ft_isprint(51));
	printf("%d", ft_isprint(13));
	printf("%d", ft_isprint(-23));
	printf("%d", ft_isprint(164));
	printf("%d", ft_isprint(EOF));
	printf("%s", "---");
	printf("%d", isprint('A'));
	printf("%d", isprint('3'));
	printf("%d", isprint('\n'));
	printf("%d", isprint(65));
	printf("%d", isprint(51));
	printf("%d", isprint(13));
	printf("%d", isprint(-23));
	printf("%d", isprint(164));
	printf("%d", isprint(EOF));

	return (0);
}

