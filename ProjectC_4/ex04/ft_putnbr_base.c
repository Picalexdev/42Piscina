/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 18:50:19 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/17 19:21:31 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != 0)
		a++;
	return (a);
}

int		ft_atoi(char *str)
{
	int numero;
	int negativo;
	int i;

	numero = 0;
	negativo = 1;
	i = 0;
	if (str[0] == '-')
		negativo = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		numero = numero * 10 + str[i] - 48;
		i++;
	}
	return (numero * negativo);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int x;
	char *num;
	int pos;
	char a;
	int y;

	pos = 0;
	x = ft_strlen(base);
	while (nbr / x)
	{
		x = x + x;
	}
	while (nbr / x)
	{
		y = y / x
		num[pos] = base[(nbr / (x - 1) - 1)];
		pos++;
		a = num[pos];
		write(1, &a, 1);
	}
	num[pos] = 0;
	pos = 0;
	while (num[pos])
	{
		a = num[pos];
		write(1, &a, 1);
	}
}

int main()
{
	int x;
	char *y;

	x = 12345;
	y = "Hola";

	ft_putnbr_base(x, y);
}