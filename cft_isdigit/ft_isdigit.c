/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:14:30 by caliaga-          #+#    #+#             */
/*   Updated: 2022/09/18 13:15:29 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= 48  && c <= 57)
		return (1);
	return (0);
}

int	main()
{
	printf("%d", ft_isdigit('A'));
	printf("%d", ft_isdigit('3'));
	printf("%d", ft_isdigit('\n'));
	printf("%d", ft_isdigit(65));
	printf("%d", ft_isdigit(51));
	printf("%d", ft_isdigit(13));
	printf("%d", ft_isdigit(-23));
	printf("%d", ft_isdigit(164));
	printf("%d", ft_isdigit(EOF));
	printf("%s", "---");
	printf("%d", isdigit('A'));
	printf("%d", isdigit('3'));
	printf("%d", isdigit('\n'));
	printf("%d", isdigit(65));
	printf("%d", isdigit(51));
	printf("%d", isdigit(13));
	printf("%d", isdigit(-23));
	printf("%d", isdigit(164));
	printf("%d", isdigit(EOF));

	return (0);
}

