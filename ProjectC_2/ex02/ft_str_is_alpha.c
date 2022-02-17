/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 09:48:56 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/09 11:38:33 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	int		x;
	int		a;

	a = 0;
	x = 1;
	while (*(str + a) != 0 && x == 1)
	{
		if (*(str + a) > 64 && *(str + a) < 123)
		{
			if (*(str + a) > 96 || *(str + a) < 91)
			{
				x = 1;
			}
			else
				x = 0;
		}
		else
			x = 0;
		a++;
	}
	return (x);
}
