/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:37:23 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/24 21:01:47 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	str = NULL;
	if (s1 && s2)
	{
		str = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, 1);
		i = 0;
		j = 0;
		if (s1 && str)
			while (s1[i++])
				str[i - 1] = s1[i - 1];
		i--;
		if (s2 && str)
			while (s2[j])
				str[i++] = s2[j++];
		str[i] = 0;
	}
	return (str);
}
