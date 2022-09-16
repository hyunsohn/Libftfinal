/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsohn <hsohn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:26:40 by hsohn             #+#    #+#             */
/*   Updated: 2022/04/02 14:26:40 by hsohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	int					i;
	unsigned char		*charstr1;
	const unsigned char	*charstr2;

	if (str2 > str1)
	{
		return (ft_memcpy(str1, str2, n));
	}
	i = 1;
	charstr1 = (unsigned char *)str1;
	charstr2 = (const unsigned char *)str2;
	if (charstr1 == 0 || charstr2 == 0)
	{
		return (0);
	}
	while (i <= n)
	{
		charstr1[n - i] = charstr2[n - i];
		i++;
	}
	return (str1);
}
