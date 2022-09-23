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
/*
** Copies len bytes from string src to string dst.
** The two strings may overlap; the copy is always done in a non-destructive
** manner.
*/

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*buf_dst;

	i = 0;
	buf_dst = ((char *)str1);
	if (str1 == str2)
		return (str1);
	else if (str1 < str2)
	{
		while (i < n)
		{
			((char *)buf_dst)[i] = ((char *)str2)[i];
			i++;
		}
	}
	else
	{
	i = n;
		while (i > 0)
		{
			i--;
			((char *)buf_dst)[i] = ((char *)str2)[i];
		}
	}
	return (buf_dst);
}
