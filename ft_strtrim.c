/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:46:13 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/22 10:50:42 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_in(const char *text, char c)
{
	while (text[0])
		if (*(text++) == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*result;

	i = 0;
	while (ft_in(set, s1[i]))
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (ft_in(set, s1[i]))
		i--;
	end = i;
	return (ft_substr(s1, start, end - start + 1));
}
