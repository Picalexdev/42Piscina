/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 12:03:48 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/09 11:38:52 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int		x;
	int		a;

	a = 0;
	x = 1;
	while (*(str + a) != 0 && x == 1)
	{
		if (*(str + a) > 96 && *(str + a) < 123)
		{
			x = 1;
		}
		else
		{
			x = 0;
		}
		a++;
	}
	return (x);
}