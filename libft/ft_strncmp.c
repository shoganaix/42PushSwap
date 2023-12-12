/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:37:26 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:49 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long long	counter;

	counter = 0;
	if (n == 0)
		return (0);
	while (s1[counter] == s2[counter] && s1[counter] != '\0'
		&& s2[counter] != '\0')
	{
		if (counter < (n - 1))
			counter++;
		else
			return (0);
	}
	return ((unsigned char)(s1[counter]) - (unsigned char)(s2[counter]));
}
/*
int	main(void)
{
    char str1[] = "Hello";
    char str2[] = "Hello, world!";
    printf("%d", ft_strncmp(str1, str2, 5));
	printf("%d", strncmp(str1, str2, 5));
	return (0);
}*/
