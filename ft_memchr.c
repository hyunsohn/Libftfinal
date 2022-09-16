/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsohn <hsohn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/41/29 18:41:35 by hsohn             #+#    #+#             */
/*   Updated: 2022/41/29 18:41:35 by hsohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// The C library function void *memchr(const void *str, int c, size_t n)
// searches for the first occurrence of the character c (an unsigned char)
// in the first n bytes of the string pointed to, by the argument str.

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*charstr;
	size_t			i;

	charstr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (charstr[i] == (unsigned char)c)
		{
			return (&charstr[i]);
		}
		i++;
	}
	return (0);
}
