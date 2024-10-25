/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:35:59 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/25 21:55:22 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	get_number(int number, int index)
{
	int	i;
	int	len;

	i = 0;
	len = intlen(number);
	while (i++ < len - 1 - index)
	{
		number /= 10;
	}
	return (number % 10 + '0');
}

static char	*ft_addchar(char *text, char c)
{
	char	*t;
	int		i;

	t = ft_calloc(ft_strlen(text) + 2, 1);
	if (!t)
		return (t);
	if (ft_strlen(text))
	{
		t = ft_memcpy(t, text, ft_strlen(text));
		free(text);
	}
	i = ft_strlen(t);
	t[i++] = c;
	t[i] = 0;
	return (t);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		len;

	result = ft_calloc(intlen(n) + 2, 1);
	i = 0;
	if (!result)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n < 0)
	{
		n = -n;
		result[0] = '-';
	}
	else if (n == 0)
		return (ft_strdup("0"));
	len = intlen(n);
	while (i < len)
		result = ft_addchar(result, get_number(n, i++));
	return (result);
}
