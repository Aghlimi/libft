/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:28:54 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/24 16:40:07 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countword(const char *s, char c)
{
	size_t	number;
	int		index;

	index = 0;
	number = 0;
	if (s)
		while (s[index++])
			if (s[index - 1] != c && (index - 1 == 0 || s[index - 1 - 1] == c))
				number++;
	return (number);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	int		i;
	int		index;
	int		len;
	int		size;

	size = 0;
	i = 0;
	index = 0;
	list = ft_calloc(countword(s, c) + 1, sizeof(char *));
	if (!list || !s)
		return (free(list), NULL);
	while (s[i])
	{
		len = 0;
		while (s[i] == c)
			i++;
		index = i;
		while (s[i] != c && s[i] && len++ != -1)
			i++;
		if (len > 0)
			list[size++] = ft_substr(s, index, len);
	}
	list[size++] = NULL;
	return (list);
}
