/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:09:39 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:42 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned long long	n;

	n = 0;
	if (dstsize > 0)
	{
		while (src[n] != '\0' && n < (dstsize - 1))
		{
			dst[n] = src[n];
			n ++;
		}
		dst[n] = 0;
	}
	while (src[n])
		n++;
	return (n);
}

/*int	main(void)
{
	char	str [] = "Hello";
	char	dst [12];
	printf("%lu", strlcpy(dst, str1, 12));
	//printf("%lu", ft_strlcpy(dst, str1, 9));
	return (0);
}*/
