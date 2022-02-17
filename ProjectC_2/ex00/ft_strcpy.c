/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 13:10:36 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/09 17:45:04 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (src[a] != 0)
	{
		dest[a] = src[a];
		a++;
	}
	if (src[a] == 0)
		dest[a] = 0;
	return (dest);
}
