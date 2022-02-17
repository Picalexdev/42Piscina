/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:17:27 by apico-su          #+#    #+#             */
/*   Updated: 2022/02/11 17:33:08 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst;
	t_list	*ptr;

	if (!lst)
		return (NULL);
	ptr = NULL;
	while (lst)
	{
		dst = ft_lstnew(f(lst->content));
		if (!dst)
		{
			ft_lstclear(&ptr, del);
			free (ptr);
		}
		ft_lstadd_back(&ptr, dst);
		lst = lst->next;
	}
	return (ptr);
}
