/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 12:15:04 by caliaga-          #+#    #+#             */
/*   Updated: 2022/09/18 13:07:25 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
	if ((c >= 65 && c <=90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int main()
{
	printf("%d", ft_isalpha('A'));
	printf("%d", ft_isalpha('3'));
	printf("%d", ft_isalpha('\n'));
	printf("%d", ft_isalpha(65));
	printf("%d", ft_isalpha(51));
	printf("%d", ft_isalpha(13));
	printf("%d", ft_isalpha(-23));
	printf("%d", ft_isalpha(164));
	printf("%d", ft_isalpha(EOF));
	printf("%s", "---");
	printf("%d", isalpha('A'));
	printf("%d", isalpha('3'));
	printf("%d", isalpha('\n'));
	printf("%d", isalpha(65));
	printf("%d", isalpha(51));
	printf("%d", isalpha(13));
	printf("%d", isalpha(-23));
	printf("%d", isalpha(164));
	printf("%d", isalpha(EOF));

	return (0);
}
