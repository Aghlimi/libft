/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:38:12 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/24 18:41:11 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	result = ft_strdup(s);
	i = 0;
	if (s && f)
		while (s[i++])
			result[i - 1] = f(i - 1, s[i - 1]);
	else
		return (NULL);
	return (result);
}
