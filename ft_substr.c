/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:46:05 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/25 10:56:14 by aghlimi          ###   ########.fr       */
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
		return (free(str), NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	while (s[i] && (size_t)i < len)
		str[i++] = s[start++];
	str[i++] = (char) NULL;
	return (str);
}
