/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:35:59 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/27 16:02:42 by aghlimi          ###   ########.fr       */
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
		number /= 10;
	return (number % 10 + '0');
}

static char	*ft_addchar(char *text, char c)
{
	int	i;

	i = ft_strlen(text);
	text[i++] = c;
	text[i] = 0;
	return (text);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		len;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	result = ft_calloc(intlen(n) + 2 - 1 * (n > 0), 1);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		result[0] = '-';
	}
	len = intlen(n);
	while (i < len)
		result = ft_addchar(result, get_number(n, i++));
	return (result);
}
