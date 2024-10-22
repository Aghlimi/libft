/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:26:59 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/22 18:04:18 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*r;

	i = 0;
	r = (char *)s;
	while ((size_t)i < n)
		if (r[i++] == c)
			return ((void *)(s + i - 1));
	return (NULL);
}
