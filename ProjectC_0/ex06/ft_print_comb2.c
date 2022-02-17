/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:15:30 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/02 16:31:11 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int z)
{
	char uno;
	char dos;
	char tres;
	char cuatro;

	uno = (x / 10) + '0';
	dos = (x % 10) + '0';
	tres = (y / 10) + '0';
	cuatro = (y % 10) + '0';
	write(1, &uno, 1);
	write(1, &dos, 1);
	write(1, " ", 1);
	write(1, &tres, 1);
	write(1, &cuatro, 1);
	if (z == 0)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		while (++b <= 99)
		{
			if (a < 98)
				ft_putchar(a, b, 0);
			else
				ft_putchar(a, b, 1);
			if (b == 99)
			{
				a++;
				b = a;
			}
		}
	}
}
