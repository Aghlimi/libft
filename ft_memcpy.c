/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:53:05 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/27 16:35:28 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	int		i;
	char	*s;

	if (dst == src)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	i = 0;
	while ((dst || src) && (size_t)i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
