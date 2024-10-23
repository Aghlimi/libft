/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:42:19 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/23 10:48:18 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*ss1;
	char	*ss2;

	i = 0;
	ss1 = (char *)s1;
	ss2 = (char *)s2;
	while ((size_t)i < n)
	{
		if ((unsigned char)ss1[i] > (unsigned char)ss2[i])
			return (1);
		else if ((unsigned char)ss1[i] < (unsigned char)ss2[i])
			return (-1);
		i++;
	}
	return (0);
}
