/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsohn <hsohn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:31:29 by hsohn             #+#    #+#             */
/*   Updated: 2022/04/02 17:31:29 by hsohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*ret;

	c = (unsigned char)c;
	i = 0;
	ret = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			ret = (char *)&str[i];
		i++;
	}
	if (c == 0)
	{
		return ((char *)&str[i]);
	}
	return (ret);
}
