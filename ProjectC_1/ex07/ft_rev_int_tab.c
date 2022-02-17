/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 14:12:15 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/04 10:44:39 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int x;
	int swap;

	x = 0;
	while (x < (size / 2))
	{
		swap = tab[x];
		tab[x] = tab[size - x - 1];
		tab[size - x - 1] = swap;
		x++;
	}
}
