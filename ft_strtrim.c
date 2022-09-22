/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsohn <hsohn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:28:49 by hsohn             #+#    #+#             */
/*   Updated: 2022/05/04 12:28:49 by hsohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_isin(char c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	ft_findstart(char const *s1, char const *set)
{
	int		removed;
	size_t	start;

	removed = 1;
	start = 0;
	while (removed && s1[start] != 0)
	{
		removed = 0;
		if (ft_isin(s1[start], set))
		{
			start = start + 1;
			removed = 1;
		}
	}
	return (start);
}

static int	ft_findend(char const *s1, char const *set)
{
	int		removed;
	int		end;

	removed = 1;
	end = ft_strlen(s1) - 1;
	while (removed && s1[end] != 0)
	{
		removed = 0;
		if (ft_isin(s1[end], set))
		{
			end = end - 1;
			removed = 1;
		}
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	size_t	len;
	char	*ret;

	if (!s1)
		return (NULL);
	start = ft_findstart(s1, set);
	end = ft_findend(s1, set);
	if (end < start)
		len = 0;
	else
		len = end - start + 1;
	ret = ft_substr(s1, start, len);
	return (ret);
}
