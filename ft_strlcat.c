/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsohn <hsohn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:27:08 by hsohn             #+#    #+#             */
/*   Updated: 2022/04/07 10:27:08 by hsohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	strlen_s;
	size_t	strlen_d;

	strlen_s = ft_strlen(src);
	strlen_d = ft_strlen(dst);
	if (strlen_d >= size)
	{
		return (size + strlen_s);
	}
	if (strlen_s + strlen_d < size)
	{
		ft_memcpy(dst + strlen_d, src, strlen_s + 1);
	}
	else
	{
		ft_memcpy(dst + strlen_d, src, size - strlen_d - 1);
		dst[size - 1] = 0;
	}
	return (strlen_d + strlen_s);
}
