/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:28:54 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/26 22:50:05 by aghlimi          ###   ########.fr       */
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

static void	freesplit(char **list, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		free(list[i]);
}

static char	**splitloop(const char *s, char c, char **list)
{
	int		i;
	int		index;
	int		len;
	size_t	size;

	size = 0;
	i = 0;
	index = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == c)
			i++;
		index = i;
		while (s[i] != c && s[i] && len++ != -1)
			i++;
		list[size] = ft_substr(s, index, len);
		if (s[index])
			if (!list[size++])
			{
				return (freesplit(list, size - 1), free(list), NULL);
			}
	}
	list[size++] = NULL;
	return (list);
}

char	**ft_split(char const *s, char c)
{
	char	**list;

	list = ft_calloc(countword(s, c) + 1, sizeof(char *));
	if (!list || !s)
	{
		free(list);
		return (NULL);
	}
	return (splitloop(s, c, list));
}
