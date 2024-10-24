/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:23:47 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/24 17:47:49 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*m;

	if (size && count >= SIZE_MAX / size)
		return (NULL);
	m = malloc(count * size);
	if (!m)
		return (NULL);
	ft_bzero(m, count * size);
	return (m);
}
