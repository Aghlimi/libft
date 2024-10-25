/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:46:13 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/25 12:13:36 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_in(const char *text, char c)
{
	int	i;

	i = 0;
	while (text[i])
		if (*(text + i++) == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_in(set, s1[i]))
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (ft_in(set, s1[i]) && i > 0)
		i--;
	end = i;
	if (start >= end)
		return (ft_strdup(""));
	return (ft_substr(s1, start, end - start + 1));
}
// int	main(int argc, char const *argv[])
// {
	// 
// 	char s1[] = "          ";
// 	printf("|%s|", ft_strtrim(s1, " "));
// 	return (0);
// }
