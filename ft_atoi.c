/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsohn <hsohn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:41:59 by hsohn             #+#    #+#             */
/*   Updated: 2022/04/10 17:41:59 by hsohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_stripfront(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0 && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	long	ret;
	int		sign;

	sign = 1;
	ret = 0;
	i = ft_stripfront(str);
	if (str[i] != 0 && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != 0 && ft_isdigit(str[i]))
	{
		ret = ret * 10;
		ret = ret + (str[i] - '0');
		i++;
	}
	if ((ret == 2147483648 && sign == 1) || ret > 2147483648)
	{
		return (sign);
	}
	return (sign * ret);
}
