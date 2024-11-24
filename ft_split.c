/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:28:54 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/27 13:32:24 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t countword(const char *s, char c)
{
	size_t number;
	int index;

	index = 0;
	number = 0;
	if (s)
	{
		while (s[index])
		{
			if (s[index] != c && (index == 0 || s[index - 1] == c))
				number++;
			index++;
		}
	}
	return (number);
}

static void freesplit(char **list, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		if (list[i])
			free(list[i]);
		i++;
	}
	free(list);
}
int skip(const char *s, int i, char c)
{
	if (s[i] == '\'' || s[i] == '"' || s[i] == '`')
		return ft_strchr(s + i + 1, s[i]) - s + i;
	while (s[i] != c && s[i])
		i++;
	return i;
}

void parse(char *text)
{
	if (!text)
		return ;
	if (ft_strchr("\"'`", text[0]) && ft_strchr("\"'`", text[ft_strlen(text) - 1]))
	{
		text[ft_strlen(text) - 1] = 0;
		ft_memmove(text, text + 1, ft_strlen(text));
	}
}
static char **splitloop(const char *s, char c, char **list)
{
	int i;
	int index;
	size_t size;

	size = 0;
	i = 0;
	index = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		index = i;
		i = skip(s, i, c);
		list[size] = ft_substr(s, index, i - index);
		parse(list[size]);
		if (!list[size])
			return (freesplit(list, size), NULL);
		else if (ft_strlen(list[size]) == 0)
			list[size] = (free(list[size]), NULL);
		size++;
	}
	return (list);
}

char **ft_split(char const *s, char c)
{
	char **list;

	if (!s)
		return (NULL);
	list = ft_calloc(countword(s, c) + 1, sizeof(char *));
	if (!list)
		return (NULL);
	list = splitloop(s, c, list);
	return (list);
}
int main(int argc, char const *argv[])
{
	if (argc - 1)
	{
		int i = 0;
		char **list = ft_split(argv[1], ' ');
		while (list[i])
		{
			printf("%s\n", list[i++]);
		}
	}
	return 0;
}
// awk '{printf $1}'