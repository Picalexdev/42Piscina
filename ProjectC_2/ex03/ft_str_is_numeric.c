/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 11:54:34 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/09 11:38:48 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int		x;
	int		a;

	a = 0;
	x = 1;
	while (*(str + a) != 0 && x == 1)
	{
		if (*(str + a) > 47 && *(str + a) < 58)
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
