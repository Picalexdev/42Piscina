/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:45:09 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/06 09:57:04 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int x;
	int count;
	int swap;

	x = 0;
	while (x < size)
	{
		count = 0;
		while (count < size - 1)
		{
			if (tab[count] > tab[count + 1])
			{
				swap = tab[count];
				tab[count] = tab[count + 1];
				tab[count + 1] = swap;
				x = 0;
				count++;
			}
			else
			{
				x++;
				count++;
			}
		}
	}
}

int	main(void)
{
	int		tab[4]={1, 2, 3, 0};
	
	ft_sort_int_tab(tab, 4);
	printf("%d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3]);
}

