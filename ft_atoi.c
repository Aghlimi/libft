/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghlimi <aghlimi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:02:25 by aghlimi           #+#    #+#             */
/*   Updated: 2024/10/26 11:32:26 by aghlimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	number;
	int					index;
	int					sign;

	index = 0;
	number = 0;
	sign = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == ' ')
		index++;
	if (str[index] == '-' || str[index] == '+')
		if (str[index++] == '-')
			sign = 1;
	while (ft_isdigit(str[index])){
		if (number - (1 * sign) >= 9223372036854775807)
			return (-1 * !sign);
		number = number * 10 + str[index++] - '0';
	
	}
	return ((int)(number * (1 + -2 * sign)));
}
