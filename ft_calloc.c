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
	int		memsize;

	if (2147483647 / num < size)
		return (NULL);
	memsize = num * size;
	if (memsize == 0 || (size_t) memsize != num * size)
		return (NULL);
	mem = (char *)malloc(memsize);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, memsize);
	return (mem);
}
