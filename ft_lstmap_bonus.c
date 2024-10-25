/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:02:35 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/24 20:52:07 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;

	list = NULL;
	while (lst && f && del)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
			return (ft_lstclear(&list, del), NULL);
		ft_lstadd_back(&list, new);
		lst = lst->next;
	}
	return (list);
}
