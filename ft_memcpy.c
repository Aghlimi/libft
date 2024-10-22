/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:53:05 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/22 10:56:10 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	int		i;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	while (s[i] && (size_t)i < n)
	{
		d[i - 1] = s[i - 1];
		i++;
	}
	return (dst);
}