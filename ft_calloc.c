/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsohn <hsohn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:58:02 by hsohn             #+#    #+#             */
/*   Updated: 2022/04/10 17:58:02 by hsohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;
	mem = (char *)malloc(num * size);
	if (mem == NULL)
	{
		return (NULL);
	}
	ft_bzero(mem, num * size);
	return (mem);
}
