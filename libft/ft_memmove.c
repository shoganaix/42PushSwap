/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:34:32 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:22 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tempdst;
	unsigned char	*tempsrc;

	tempdst = (unsigned char *) dst;
	tempsrc = (unsigned char *) src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
		while (len--)
			tempdst[len] = tempsrc[len];
	return (dst);
}

/*int	main(void)
{
	char	str[] = "hello";
	char	str1[] = "world";
	memmove(str, str1, 2);
	ft_memmove(str, str1, 2);
	printf("%s", str);
	return (0);
}*/
