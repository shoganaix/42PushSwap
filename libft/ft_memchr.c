/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:40:30 by msoriano          #+#    #+#             */
/*   Updated: 2023/04/04 13:07:33 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*chr;
	unsigned long long	counter;

	counter = 0;
	c = (unsigned char) c;
	chr = (unsigned char *) s;
	while (counter < n)
	{
		if (chr[counter] == c)
			return (&chr[counter]);
		counter ++;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_memchr("Hooola", 'o', 2));
	printf("%s", memchr("Hiooola", 'o', 2));
	return (0);
}*/
