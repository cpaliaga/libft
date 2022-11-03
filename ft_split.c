/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:23:25 by caliaga-          #+#    #+#             */
/*   Updated: 2022/11/03 13:58:08 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	*ft_rows(char const *s, char c, size_t *rows)
{
	size_t	nb;
	size_t	i;
	size_t	k;
	size_t	*f;

	i = -1;
	nb = 0;
	while (s[++i] != '\0')
		if (s[i] != c)
			if (i==0 || s[i -1] == c)
				nb++;
	*rows = nb;
	i = -1;
	k = -1;
	f = malloc (nb * sizeof(size_t));
	while (s[++i] != '\0')
		if (s[i] != c)
			if (i==0 || s[i -1] == c)
				 f[++k] = i;
	return (f);
}

static void	ft_cols(const char *s, char c, size_t start, size_t *cols)
{
	size_t	nb;

	nb = 0;
	while (s[start] != c && s[start] != '\0')
	{
		start++;
		nb++;
	}
	*cols = nb;
}

static void	ft_check(char **split, size_t row)
{
	while (row-- > 0)
	{
		free(split[row]);
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	size_t	rows;
	size_t	row;
	size_t	cols;
	size_t	*starts;
	char	**split;

	starts = ft_rows(s,c,&rows);
	row = 0;
	if (!s)
		return (NULL);
	split = (char **) malloc ((rows + 1) * sizeof(char));
	if (!split)
		return (NULL);
	while (row < rows)
	{
		ft_cols(s, c, starts[row], &cols);
		split[row] = ft_substr(s, starts[row], cols);
		if (!split[row])
			ft_check(split, row);
		if (!split[row])
			return (NULL);	
		row++;
	}
	split[row] = 0;
	return (split);
}
