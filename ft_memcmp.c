/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsohn <hsohn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:05:49 by hsohn             #+#    #+#             */
/*   Updated: 2022/04/02 16:05:49 by hsohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// The C library function int memcmp(const void *str1, const void *str2,
//		size_t n))
// compares the first n bytes of memory area str1 and memory area str2.
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*charstr1;
	const unsigned char	*charstr2;
	size_t				i;

	charstr1 = str1;
	charstr2 = str2;
	i = 0;
	while (i < n)
	{
		if (charstr2[i] > charstr1[i])
		{
			return (-1);
		}
		else if (charstr2[i] < charstr1[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
