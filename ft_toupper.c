/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:27:40 by caliaga-          #+#    #+#             */
/*   Updated: 2022/09/18 14:34:00 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
int main()
{
	printf("%d", ft_toupper('a'));
	printf("%d", ft_toupper('3'));
	printf("%d", ft_toupper('\n'));
	printf("%d", ft_toupper(97));
	printf("%d", ft_toupper(51));
	printf("%d", ft_toupper(13));
	printf("%d", ft_toupper(-23));
	printf("%d", ft_toupper(164));
	printf("%d", ft_toupper(EOF));
	printf("%s", "---");
	printf("%d", toupper('a'));
	printf("%d", toupper('3'));
	printf("%d", toupper('\n'));
	printf("%d", toupper(97));
	printf("%d", toupper(51));
	printf("%d", toupper(13));
	printf("%d", toupper(-23));
	printf("%d", toupper(164));
	printf("%d", toupper(EOF));

	return (0);
}

