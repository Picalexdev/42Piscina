/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:19:34 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/19 19:09:47 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	x;
	int	y;

	if (!s1)
		return (NULL);
	x = 0;
	y = ft_strlen(s1) - 1;
	while (s1[x] && ft_strchr(set, s1[x]))
		x++;
	while (y && ft_strrchr(set, s1[y]))
		y--;
	return (ft_substr(s1, x, y - x + 1));
}
