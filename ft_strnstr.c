/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:48:26 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/27 19:35:47 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static size_t	ftlen(char const *s1)
{
	size_t	i;

	i = 0;
	if (s1)
		while (s1[i])
			i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (ftlen(haystack) < len && haystack)
		len = ftlen(haystack);
	i = 0;
	while (len - i > 0)
	{
		if (!ft_strlen(haystack) || len - i < needle_len)
			break ;
		if (ft_strncmp(haystack + i++, needle, needle_len) == 0)
			return ((char *)(haystack + i - 1));
	}
	if (needle[0] == 0)
		return ((char *)(haystack));
	return (NULL);
}
