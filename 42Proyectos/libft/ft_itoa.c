/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 19:29:38 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/20 15:44:37 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	itoa_length(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		len = 1;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = itoa_length(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[len-- - 1] = '8';
			n /= 10;
		}
		n = -n;
	}
	while (n && len >= 0)
	{
		str[--len] = n % 10 + 48;
		n /= 10;
	}
	return (str);
}
