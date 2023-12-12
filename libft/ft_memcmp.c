/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:23:49 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:21 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long long	counter;

	counter = 0;
	while (counter < n)
	{
		if (((unsigned char *)s1)[counter] != ((unsigned char *)s2)[counter])
			return (((unsigned char *)s1)[counter] -
				((unsigned char *)s2)[counter]);
		counter++;
	}
	return (0);
}
/*
int	main(void)
{
	char str1[] = "Hello";
    char str2[] = "Hello, world!";
    printf("%d", ft_memcmp(str1, str2, 7));
	printf("%d", memcmp(str1, str2, 7));
	return (0);
}*/
