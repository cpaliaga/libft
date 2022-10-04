/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:01:08 by caliaga-          #+#    #+#             */
/*   Updated: 2022/09/27 20:35:42 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	/* PRUEBA DE STRLEN */
	const char a[5] = "Hola";
	const char b[14] = "que tal estas";
	const char c[3] = "tu";
	const char d[20] = "hoy dia de tu santo";
	printf("La frase '%s' tiene %zu posiciones.\n", a, ft_strlen(a));
	printf("La frase '%s' tiene %zu posiciones.\n", b, ft_strlen(b));
	printf("La frase '%s' tiene %zu posiciones.\n", c, ft_strlen(c));
	printf("La frase '%s' tiene %zu posiciones.\n", d, ft_strlen(d));
	/* PRUEBA DE MEMSET */
	char	src[40] = "01234567890123456789";
	char	c1 = 'a';
	size_t	size = 40;
	ft_memset(src, c1, size);
	printf("\nDel original '%s' con letra '%c' se ha copiado '%zu'.", src, c1, size);
	char	src_b[40] = "01234567890123456789";
	char	c2 = 'b';
	size_t	size_b = 40;
	memset(src_b, c2, size_b);
	printf("\nDel original '%s' con letra '%c' se ha copiado '%zu'.", src_b, c2, size_b);
	/* PRUEBA DE BZERO */
	char	src1[40] = "01234567890123456789";
	size_t	size2 = 40;
	ft_bzero(src1, size2);
	printf("\nDel original '%s' con '0' se ha copiado '%zu'.", src1, size2);
	char	src_b1[40] = "01234567890123456789";
	size_t	size_b2 = 40;
	bzero(src_b1, size_b2);
	printf("\nDel original '%s' con '0' se ha copiado '%zu'.", src_b1, size_b2);
	/* PRUEBA DE STRLCPY */
	char	src11[40] = "01234567890123456789";
	char	dst11[40] = "";
	size_t	size11 = 4;
	size_t	coy_a = ft_strlcpy(dst11, src11, size11);
	printf("\nDel original '%s' con largo '%zu' se ha copiado '%s' con largo '%zu'.", src11, coy_a, dst11, size11);
	size_t 	coy_b = strlcpy(dst11, src11, size11);
	printf("\nDel original '%s' con largo '%zu' se ha copiado '%s' con largo '%zu'.", src11, coy_b, dst11, size11);
	/* PRUEBA DE STRLCAT */
	char	src12[40] = "01234567890123456789";
	char	dst12[40] = "abc";
	size_t	size12 = 20;
	size_t	cat_a = ft_strlcat(dst12, src12, size12);
	printf("\nDel original '%s' con largo '%zu' se ha copiado '%s' con largo '%zu'.", src12, cat_a , dst12, size12);
	size_t 	cat_b = strlcat(dst12, src12, size12);
	printf("\nDel original '%s' con largo '%zu' se ha copiado '%s' con largo '%zu'.", src12, cat_b , dst12, size12);
	/* PRUEBA DE TO UPPER */
	printf("%d", ft_toupper('a'));
	printf("%d", ft_toupper('3'));
	/* PRUEBA DE TOLOWER */
	printf("%d", ft_tolower('A'));
	printf("%d", ft_tolower('3'));
	/* PRUEBA STRCHR */
    const char str14[] = "Las calles están limpias";
    char c14 = 'a';
    char *mod14 = ft_strchr(str14, c14);
    char *origen14 = strchr(str14, c14);
    printf("En la cadena '%s' aparecer '%c' en la posición '%p' \n", str14, c14, mod14);
    printf("En la cadena '%s' aparecer '%c' en la posición '%p' \n", str14, c14, origen14);
    printf("En la cadena '%s' aparecer '%c' en la posición '%d' \n", str14, c14, *mod14);
    printf("En la cadena '%s' aparecer '%c' en la posición '%d' \n", str14, c14, *origen14);
    printf("En la cadena '%s' aparecer '%c' en la posición '%c' \n", str14, c14, *mod14);
    printf("En la cadena '%s' aparecer '%c' en la posición '%c' \n", str14, c14, *origen14);
	/* PRUEBA DE STRRCHR */
    const char str15[] = "Las calles están limpias";
    char c15 = 'c';
    char *mod15 = ft_strrchr(str15, c15);
    char *origen15 = strrchr(str15, c15);
    printf("En la cadena '%s' aparecer '%c' en la posición '%p' \n", str15, c15, mod15);
    printf("En la cadena '%s' aparecer '%c' en la posición '%p' \n", str15, c15, origen15);
    printf("En la cadena '%s' aparecer '%c' en la posición '%d' \n", str15, c15, *mod15);
    printf("En la cadena '%s' aparecer '%c' en la posición '%d' \n", str15, c15, *origen15);
    printf("En la cadena '%s' aparecer '%c' en la posición '%c' \n", str15, c15, *mod15);
    printf("En la cadena '%s' aparecer '%c' en la posición '%c' \n", str15, c15, *origen15);
	/* PRUEBA DE STRNCMP */
	const char str16[] = "Las calles están limpias";
	const char str216[] = "Las calles no están limpias";
	int n16 = 15;
	int mod16 = ft_strncmp(str16, str216, n16);
	int origen16 = strncmp(str16, str216, n16);
	printf("En la cadena '%s' aparecer '%d' en la posición '%d' \n", str16, n16, mod16);
	printf("En la cadena '%s' aparecer '%d' en la posición '%d' \n", str16, n16, origen16);
	/* PRUEBA DE MEMCHR */
    const char str17[] = "Las calles están limpias";
    char c17 = 's';
    int n17 = 6;
    char *mod17 = ft_memchr(str17, c17, n17);
    char *origen17 = memchr(str17, c17, n17);
    printf("\n MEMEn la cadena '%s' aparecer '%c' en la posición '%p' \n", str17, c17, mod17);
    printf("En la cadena '%s' aparecer '%c' en la posición '%p' \n", str17, c17, origen17);
    printf("En la cadena '%s' aparecer '%c' en la posición '%d' \n", str17, c17, *mod17);
    printf("En la cadena '%s' aparecer '%c' en la posición '%d' \n", str17, c17, *origen17);
    printf("En la cadena '%s' aparecer '%c' en la posición '%c' \n", str17, c17, *mod17);
    printf("En la cadena '%s' aparecer '%c' en la posición '%c' \n", str17, c17, *origen17);
	/* PRUEBA DE STRDUP */
    char str18[] = "Las calles están limpias";
    char *copia18 = ft_strdup(str18);
    char *original18 = strdup(str18);
    printf("En la ft cadena '%s' \n", copia18);
    printf("En la cadena '%s' \n", original18);
    free(copia18);
    free(original18);
    printf("En la ft cadena '%s' \n", copia18);
    printf("En la cadena '%s' \n", original18);

	return (0);
}
