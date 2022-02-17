/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 09:01:24 by apico-su          #+#    #+#             */
/*   Updated: 2021/02/28 18:37:50 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int g_fila;
int g_columna;
int g_a;
void	fin();
void	principio();
void	medio();

void	rush(int x, int y)
{
	g_fila = 0;
	if (x < 0 || y < 0)
		write(1, "Introduzca parámetros positivos.\n", 35);
	while (g_fila++ < y && y > 0 && x > 0)
	{
		g_columna = 0;
		if (g_fila != 1)
			ft_putchar('\n');
		while (g_columna++ < x && x > 0)
		{
			if (g_fila == 1)
				principio(x);
			else if (g_fila == y)
				fin(x);
			else
				medio(x);
		}
	}
	if (x > 0 && y > 0)
		ft_putchar('\n');
}

void	principio(int g_a)
{
	if (g_columna == 1)
		ft_putchar('A');
	else if (g_columna == g_a)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	medio(int g_a)
{
	if (g_columna == 1)
		ft_putchar('B');
	else if (g_columna == g_a)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	fin(int g_a)
{
	if (g_columna == 1)
		ft_putchar('C');
	else if (g_columna == g_a)
		ft_putchar('A');
	else
		ft_putchar('B');
}
