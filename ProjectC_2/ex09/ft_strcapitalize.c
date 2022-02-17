/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 11:40:23 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/09 15:00:25 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		pos;
	char	x;
	char	*ptr;

	ptr = str;
	pos = 0;
	while (str[pos] != 0)
	{
		if (str[pos] >= 'A' && str[pos] <= 'Z')
		{
			x = str[pos] + 32;
			str[pos] = x;
		}
		pos++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		pos;

	ft_strlowcase(str);
	pos = 0;
	while (str[pos] != 0)
	{
		if (str[pos - 1] < '0' || str[pos - 1] > '9')
		{
			if (str[pos - 1] < 'a' || str[pos - 1] > 'z')
			{
				if (str[pos - 1] < 'A' || str[pos - 1] > 'Z')
				{
					if (str[pos] >= 'a' && str[pos] <= 'z')
						str[pos] = str[pos] - 32;
				}
			}
		}
		pos++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	return (str);
}
