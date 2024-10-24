/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:32:05 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/23 14:58:59 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*d;
	t_list	*t;

	if (lst && del)
	{
		d = *lst;
		while (d)
		{
			t = d->next;
			ft_lstdelone(d, del);
			d = t;
		}
		*lst = NULL;
	}
}
