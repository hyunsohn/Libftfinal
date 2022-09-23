/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsohn <hsohn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:31:29 by hsohn             #+#    #+#             */
/*   Updated: 2022/09/23 13:06:32 by hsohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Takes the destination's size as a parameter and will not write more than
** that many bytes, to prevent buffer overflow (assuming size is correct).
** Writes a single NULL byte to the destination (if size is not zero).
** The resulting string is guaranteed to be NULL-terminated even if truncated.
** Returns the length of the entire source string.
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size -1)
		{
			dest[i] = src [i];
			i ++;
		}
		dest[i] = 0;
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}
