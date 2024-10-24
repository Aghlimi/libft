/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:48:26 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/23 21:34:33 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	i = 0;
	if (!haystack || !needle)
		return (NULL);
	while (haystack[i] && len - i >= ft_strlen(needle))
		if (ft_strncmp(ft_substr(haystack, i++, ft_strlen(needle)), needle,
				ft_strlen(needle)) == 0)
			return ((char *)(haystack + i - 1));
	return (NULL);
}
