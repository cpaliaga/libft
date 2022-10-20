/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:23:25 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/20 20:41:22 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_rows(char const *s, char c)
{
	size_t	nb;

	nb = 1;
	while (*s)
	{
		if (*s == c)
			if (*(s - 1) != c)
				nb += 1;
		s++;
	}
	return (nb);
}

static void	ft_freedom(char **split, size_t rows)
{
	while (!rows)
		free (split[rows--]);
	free(split);
	//return (split);
}

static char	*ft_word(const char *s, int a, int b, char **split)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *) malloc ((b - a + 1) * sizeof(char));
	if (!word)
	{
		ft_freedom(split, ft_rows(s, *(s + b + 1)));
		return (NULL);
	}
	while (a < b)
		word[i++] = s[a++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	r;
	int		alfa;
	char	**split;

	if (!s)
		return (NULL);
	split = malloc ((ft_rows(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	r = 0;
	alfa = -1;
	while (i <= ft_strlen(s))
	{
		if (*(s + i) != c && alfa < 0)
			alfa = i;
		else if ((*(s + i) == c || i == ft_strlen(s)) && alfa >= 0)
		{
			split[r++] = ft_word(s, alfa, i, split);
			alfa = -1;
		}
		i++;
	}
	split[r] = 0;
	return (split);
}
