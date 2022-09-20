/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:50:00 by caliaga-          #+#    #+#             */
/*   Updated: 2022/09/18 13:50:25 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int main()
{
	printf("%d", ft_isascii('A'));
	printf("%d", ft_isascii('3'));
	printf("%d", ft_isascii('\n'));
	printf("%d", ft_isascii(65));
	printf("%d", ft_isascii(51));
	printf("%d", ft_isascii(13));
	printf("%d", ft_isascii(-23));
	printf("%d", ft_isascii(164));
	printf("%d", ft_isascii(EOF));
	printf("%s", "---");
	printf("%d", isascii('A'));
	printf("%d", isascii('3'));
	printf("%d", isascii('\n'));
	printf("%d", isascii(65));
	printf("%d", isascii(51));
	printf("%d", isascii(13));
	printf("%d", isascii(-23));
	printf("%d", isascii(164));
	printf("%d", isascii(EOF));

	return (0);
}

