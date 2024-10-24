/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:55:06 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/24 14:30:47 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	int		i;

	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if ((dst || src) && dst > src)
	{
		d = (char *)dst;
		s = (char *)src;
		i = len;
		while (--i >= 0)
			d[i] = s[i];
	}
	return (dst);
}
