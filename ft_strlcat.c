/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:56:54 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/22 11:18:48 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;

	if (!(dst && src && dstsize <= ft_strlen(src)))
		return (ft_strlen(dst) + ft_strlen(src));
	i = ft_strlen(dst);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (ft_strlen(dst))
		dst[i] = 0;
	return (dst);
}
