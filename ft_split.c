/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:23:25 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/28 17:50:35 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_rows(char const *s, char c)
{
	size_t	nb;

	nb = 1;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s == c && *(s - 1) != c)
				nb += 1;
		s++;
	}
	return (nb);
}

static void	ft_cols(const char *s, size_t *k, size_t *cols, char c)
{
	while (s[*k] != c && s[*k] != '\0')
	{
		(*k)++;
		(*cols)++;
	}
}

static void ft_check(char **split, size_t row)
{
	while (row-- > 0)
	{
		free(split[row]);
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	size_t	row;
	size_t	cols;
	size_t	k;
	char	**split;

	row = 0;
	cols = 0;
	k = 0;
	if (!s)
		return (NULL);
	split = (char **) malloc ((ft_rows(s, c) + 1) * sizeof(char));
	if (!split)
		return (NULL);
	while (row < ft_rows(s, c))
	{
		while (s[k] == c && s[k] != '\0')
			k++;
		ft_cols(s, &k, &cols, c);
		split[row] = ft_substr(s, (k - cols), cols);
		if (!split[row])
			ft_check(split, row);
		if (!split[row])
			return (NULL);	
		row++;
	}
	split[row] = 0;
	return (split);
}
