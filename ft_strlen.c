/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:58:28 by caliaga-          #+#    #+#             */
/*   Updated: 2022/09/18 14:12:39 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
// #include <string.h>

size_t ft_strlen(const char *str)
{
	size_t a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

int	main()
{ 
	const char a[5] = "Hola";
	const char b[14] = "que tal estas";
	const char c[3] = "tu";
	const char d[20] = "hoy dia de tu santo";
	printf("La frase '%s' tiene %zu posiciones.\n", a, ft_strlen(a));
	printf("La frase '%s' tiene %zu posiciones.\n", b, ft_strlen(b));
	printf("La frase '%s' tiene %zu posiciones.\n", c, ft_strlen(c));
	printf("La frase '%s' tiene %zu posiciones.\n", d, ft_strlen(d));
	return (0);
}

