/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:13:48 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/19 17:18:07 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final;
	int		i;
	int		x;

	if (!s1 || !s2)
		return (NULL);
	final = ft_calloc((ft_strlen(s1) + ft_strlen(s2)) + 1, sizeof(char));
	if (!final)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		final[i] = s1[i];
		i++;
	}
	x = i;
	i = 0;
	while (s2[i])
	{
		final[x + i] = s2[i];
		i++;
	}
	return (final);
}
