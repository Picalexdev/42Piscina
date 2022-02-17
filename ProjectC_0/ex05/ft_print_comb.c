/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:13:42 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/02 16:30:53 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d)
{
	write(1, &d, 1);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	c = '0' - 1;
	while (c++ <= '9')
	{
		b = c;
		while (++b <= '9')
		{
			a = b;
			while (++a <= '9')
			{
				write(1, &c, 1);
				write(1, &b, 1);
				write(1, &a, 1);
				if (a < '9' || b < '8' || c < '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
