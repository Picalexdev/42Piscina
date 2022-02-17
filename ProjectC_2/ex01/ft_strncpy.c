/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 09:31:45 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/10 13:16:23 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n && src[a] != 0)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = 0;
		a++;
	}
	return (dest);
}
