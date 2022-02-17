/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 22:20:05 by alex              #+#    #+#             */
/*   Updated: 2021/07/29 22:33:08 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*dst;

	dst = malloc(sizeof(t_list));
	if (!dst)
		return (NULL);
	dst->content = content;
	dst->next = NULL;
	return (dst);
}
