/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 14:13:23 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/17 16:16:02 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int pos;

	pos = 0;
	if (n == 0)
		return (0);
	while (n != 0)
	{
		if (s1[pos] != s2[pos])
			return (s1[pos] - s2[pos]);
		if (s1[pos] == 0)
			return (0);
		pos++;
		n--;
	}
	return (0);
}
