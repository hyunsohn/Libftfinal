/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsohn <hsohn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:20:13 by hsohn             #+#    #+#             */
/*   Updated: 2022/04/10 17:20:13 by hsohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s2[i] > (unsigned char)s1[i])
		{
			return (-1);
		}
		else if ((unsigned char)s2[i] < (unsigned char)s1[i])
		{
			return (1);
		}
		else if (s1[i] == 0 && s2[i] == 0)
		{
			return (0);
		}
		i++;
	}
	return (0);
}
