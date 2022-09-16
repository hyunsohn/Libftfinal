/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsohn <hsohn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:31:29 by hsohn             #+#    #+#             */
/*   Updated: 2022/04/02 17:31:29 by hsohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t				i;

	i = 0;
	if (dest == NULL || size == 0)
	{
		return (ft_strlen(src));
	}
	if (src == NULL)
	{
		dest[0] = 0;
		return (ft_strlen(src));
	}
	while (i + 1 < size)
	{
		dest[i] = src[i];
		if (src[i] == 0)
		{
			return (i);
		}
		i = i + 1;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}
