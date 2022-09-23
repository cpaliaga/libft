/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:41:24 by caliaga-          #+#    #+#             */
/*   Updated: 2022/09/18 14:42:44 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

int main()
{
	printf("%d", ft_tolower('A'));
	printf("%d", ft_tolower('3'));
	printf("%d", ft_tolower('\n'));
	printf("%d", ft_tolower(65));
	printf("%d", ft_tolower(51));
	printf("%d", ft_tolower(13));
	printf("%d", ft_tolower(-23));
	printf("%d", ft_tolower(164));
	printf("%d", ft_tolower(EOF));
	printf("%s", "---");
	printf("%d", tolower('A'));
	printf("%d", tolower('3'));
	printf("%d", tolower('\n'));
	printf("%d", tolower(65));
	printf("%d", tolower(51));
	printf("%d", tolower(13));
	printf("%d", tolower(-23));
	printf("%d", tolower(164));
	printf("%d", tolower(EOF));
	return (0);
}
