/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsohn <hsohn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 19:25:20 by hsohn             #+#    #+#             */
/*   Updated: 2022/04/02 19:25:20 by hsohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *charstr, int c)
{
	size_t	i;

	i = 0;
	while (charstr[i] != 0)
	{
		if (charstr[i] == (unsigned char)c)
		{
			return ((char *)&charstr[i]);
		}
		i++;
	}
	if (c == 0)
	{
		return ((char *)&charstr[i]);
	}
	return (0);
}
