/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:22:01 by apico-su          #+#    #+#             */
/*   Updated: 2022/02/11 15:23:22 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numstring(char const *s1, char c)
{
	int	comp;
	int	cles;

	comp = 0;
	cles = 0;
	if (!*s1)
		return (0);
	while (*s1)
	{
		if (*s1 == c)
			cles = 0;
		else if (!cles)
		{
			cles = 1;
			comp++;
		}
		s1++;
	}
	return (comp);
}

static int	numchar(char const *s2, char c, int i)
{
	int	lenght;

	lenght = 0;
	while (s2[i] != c && s2[i])
	{
		lenght++;
		i++;
	}
	return (lenght);
}

static char	**freee(char const **dst, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dst[j]);
	}
	free(dst);
	return (NULL);
}

static char	**affect(char const *s, char **dst, char c, int l)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s[i] && j < l)
	{
		k = 0;
		while (s[i] == c)
			i++;
		dst[j] = (char *)malloc(sizeof(char) * numchar(s, c, i) + 1);
		if (!dst[j])
			return (freee((char const **)dst, j));
		while (s[i] && s[i] != c)
			dst[j][k++] = s[i++];
		dst[j][k] = 0;
		j++;
	}
	dst[j] = 0;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		l;

	if (!s)
		return (NULL);
	l = numstring(s, c);
	dst = (char **)ft_calloc(sizeof(char *) * (l + 1), sizeof(char));
	if (!dst)
		return (NULL);
	return (affect(s, dst, c, l));
}
