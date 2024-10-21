/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:23:47 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/21 13:29:44 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*m;
	int		i;

	m = malloc(count * size);
	if (m)
	{
		i = 0;
		while (m[i])
			m[i] = 0;
	}
	return (m);
}
