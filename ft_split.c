/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:23:25 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/27 15:59:28 by caliaga-         ###   ########.fr       */
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

void	ft_cols(char *ss, size_t *cols, char c)
{
	while (*ss == c && ss != '\0')
		(*ss)++;
	while (*ss != c && ss != '\0')
	{
		(*ss)++;
		(*cols)++;
	}
}

static char	**ft_check(char **split)
{	
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	row;
	size_t	cols;
	char	*ss;
	char	**split;

	row = 0;
	cols = 0;
	ss = (char *)s;
	if (!s)
		return (NULL);
	split = (char **) malloc (sizeof(char *) * (ft_rows(s, c) + 1));
	if (!split)
		return (NULL);
	while (row < ft_rows(s, c))
	{
		ft_cols(ss, &cols, c);
		split[row] = (char *)malloc(sizeof(char) * (cols + 1));
		if (!split[row])
			return (ft_check(split));
		ft_strlcpy(split[row], ss, cols + 1);
		row++;
	}
	split[row] = 0;
	return (split);
}
