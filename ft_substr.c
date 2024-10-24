/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:46:05 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/23 21:38:18 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_calloc(len + 1, 1);
	if (!str || !s)
		return (NULL);
	while (s[i] && str && (size_t)i < len)
		str[i++] = s[start++];
	return (str);
}
