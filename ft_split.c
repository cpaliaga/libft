/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:23:25 by caliaga-          #+#    #+#             */
/*   Updated: 2022/10/18 17:27:52 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_c_rows(char const *s, char c)
{
	size_t	count;

	count = 1;
	while (*s)
	{
		if (*s == c)
			if (*(s - 1) != c)
				count += 1;
		s++;
	}
	return (count);
}

static size_t	ft_c_cols(char const *s, char c, size_t i)
{
	size_t	cols;

	cols = 0;
	while (*(s + i + cols) != c && (i + cols) < ft_strlen(s))
		cols++;
	return (cols);
}

static void *ft_freedom(char **matrix, size_t rows)
{
	while (!rows)
	{
		free(matrix + rows);
		rows--;
	}
	free(matrix);
}

static char	**ft_fillmatrix(char const *s, char c, char **matrix, size_t row)
{
	size_t	rows;
	size_t	cols;
	size_t	col;
	size_t	i;

	i = 0;
	col = 0;
	rows = ft_c_rows(s, c);
	row = -1;
	while (i < ft_strlen(s))
	{
		if (*(s + i) == c)
			i++;
		else
		{
			while(++row < rows)
			{
			   	while(col < ft_c_cols(s, c, i) || )
				{
					matrix[row][col] = *(s + i);
					col++;
					i++;
				}
				matrix[row][col] = '\0';
				col = 0;
			}
		return (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	row;

	if (!s || !c)
		return (NULL);
	row = -1;
	matrix = (char **) malloc (ft_c_rows(s, c) * sizeof (char *));
	if (!matrix)
		return (NULL);
	while (++row <= ft_c_rows(s, c))
	{
	    matrix[row] = (char *)malloc((cols + 1) * sizeof(char*));
	    if (!matrix[row])
		{
			ft_freedom(matrix,ft_c_rows(s, c))
	        return (0);
		}
	}
	row = 0;
	matrix = ft_fillmatrix(s, c, matrix, row);
	return (matrix);
}
