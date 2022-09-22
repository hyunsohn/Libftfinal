/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsohn <hsohn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:29:03 by hsohn             #+#    #+#             */
/*   Updated: 2022/05/04 12:29:03 by hsohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// The C library function void *memset(void *str, int c, size_t n)
// copies the character c (an unsigned char) to the first n characters
// of the string pointed to, by the argument str.
void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*charstr;

	i = 0;
	charstr = (unsigned char *)str;
	while (i < n)
	{
		charstr[i] = c;
		i++;
	}
	return (str);
}
