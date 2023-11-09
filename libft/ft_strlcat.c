/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:08:51 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:41 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	count;
	unsigned int	count2;
	unsigned int	res;

	count = 0;
	count2 = 0;
	res = 0;
	while (dst[count] != '\0')
		count++;
	while (src[res] != '\0')
		res++;
	if (dstsize <= count)
		res += dstsize;
	else
		res += count;
	while (src[count2] != '\0' && (count + 1) < dstsize)
	{
		dst[count] = src[count2];
		count++;
		count2++;
	}
	dst[count] = '\0';
	return (res);
}

/*int	main(void)
{
	char str1[20] = "Hello";
    char str2[] = "world!";
    unsigned int size = 15;
    // Copiar str2 en str1
    unsigned int len = ft_strlcat(str1, str2, size);
    write(1, str1, len);
    write(1, "\n", 1);
    return (0);
}*/
