/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:30:03 by apico-su          #+#    #+#             */
/*   Updated: 2022/02/11 15:58:21 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*mem;

	if (!del || !lst || !*lst)
		return ;
	while (*lst)
	{
		mem = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = mem;
	}
}
