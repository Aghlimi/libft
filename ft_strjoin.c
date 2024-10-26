/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:37:23 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/26 16:30:28 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_strlen1(char const *s1)
{
	size_t	i;

	i = 0;
	if (s1)
		while (s1[i])
			i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	str = ft_calloc(ft_strlen1(s1) + ft_strlen1(s2) + 1, 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	if (s1)
		ft_memmove(str, s1, ft_strlen1(s1));
	i = ft_strlen1(str);
	if (s2)
		while (s2[j])
			str[i++] = s2[j++];
	str[i] = 0;
	return (str);
}
