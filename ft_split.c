/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:23:25 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/25 17:50:51 by caliaga-         ###   ########.fr       */
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

char	*ft_word(char *word, char const *s, int k, int cols)
{
	int		i;

	i = 0;
	while (cols > 0)
		word[i++] = s[k - cols--];
	word[i] = '\0';
	return (word);
}

void	ft_aux(const char *s, char c, size_t *k, size_t *cols)
{
	while (s[*k] == c)
		(*k)++;
	while (s[*k] != c)
	{
		(*k)++;
		(*cols)++;
	}
}

char	**ft_split2(char const *s, char c, char **split, size_t rows)
{
	size_t	k;
	size_t	cols;
	size_t	row;

	row = 0;
	cols = 0;
	k = 0;
	while (s[k] && row < rows)
	{
		ft_aux(s, c, &k, &cols);
		split[row] = (char *)malloc(sizeof(char) * (cols + 1));
		if (!split[row])
		{
			while (row-- >= 0)
				free(split[row]);
			free(split);
			return (NULL);
		}
		ft_word(split[row], s, k, cols);
		cols = 0;
		row++;
	}
	split[row] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	size_t	row;
	size_t	rows;
	char	**split;

	row = 0;
	rows = ft_rows(s, c);
	if (s == 0)
		return (NULL);
	split = (char **) malloc (sizeof(char *) * (rows + 1));
	if (!split)
	{
		free(split);
		return (NULL);
	}
	ft_split2(s, c, split, rows);
	return (split);
}
