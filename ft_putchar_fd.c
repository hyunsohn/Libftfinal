/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsohn <hsohn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:30:50 by hsohn             #+#    #+#             */
/*   Updated: 2022/05/04 12:30:50 by hsohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>
// The C library function int putchar(int char)
// writes a character (an unsigned char) specified by
// the argument char to stdout.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
