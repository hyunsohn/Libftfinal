/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsohn <hsohn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:03:00 by hsohn             #+#    #+#             */
/*   Updated: 2022/04/10 18:03:00 by hsohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// Dupliziert den String s. Bei strlcpy muss NULL in der Size drin sein,
// bei strlen ist es ohne NULL
char	*ft_strdup(const char *s)
{
	char	*mem;
	size_t	size;

	size = ft_strlen(s);
	mem = (char *)malloc(size + 1);
	if (mem == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(mem, s, size + 1);
	return (mem);
}
