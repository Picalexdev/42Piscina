/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:45:47 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/17 13:36:17 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		pos;
	int		x;

	pos = 0;
	if (*to_find == 0)
		return (str);
	while (str[pos] != 0)
	{
		x = 0;
		while (to_find[x] == str[x + pos])
		{
			if (to_find[x + 1] == 0)
				return (str + pos);
			x++;
		}
		pos++;
	}
	return (0);
}
