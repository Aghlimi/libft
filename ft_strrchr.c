/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:17:27 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/22 12:20:48 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		if (s[i++] == c)
			return (s + i - 1);
	if (!c)
		return (s + i);
	return (NULL);
}
