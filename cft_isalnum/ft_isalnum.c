/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:23:47 by caliaga-          #+#    #+#             */
/*   Updated: 2022/09/18 13:24:01 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c)
{
	if ((c >= 65 && c <=90) || (c >= 97 && c <= 122))
return (1);
else if(c >= 48  && c <= 57)
return (1);
	return (0);
}

int main()
{
	printf("%d", ft_isalnum('A'));
	printf("%d", ft_isalnum('3'));
	printf("%d", ft_isalnum('\n'));
	printf("%d", ft_isalnum(65));
	printf("%d", ft_isalnum(51));
	printf("%d", ft_isalnum(13));
	printf("%d", ft_isalnum(-23));
	printf("%d", ft_isalnum(164));
	printf("%d", ft_isalnum(EOF));
	printf("%s", "---");
	printf("%d", isalnum('A'));
	printf("%d", isalnum('3'));
	printf("%d", isalnum('\n'));
	printf("%d", isalnum(65));
	printf("%d", isalnum(51));
	printf("%d", isalnum(13));
	printf("%d", isalnum(-23));
	printf("%d", isalnum(164));
	printf("%d", isalnum(EOF));

	return (0);
}

