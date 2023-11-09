/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:35:39 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:19 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long long	count;
	char				*p_dst;
	char				*p_src;

	p_dst = (char *) dst;
	p_src = (char *) src;
	count = 0;
	if (!dst && !src)
		return (NULL);
	while (n > count)
	{
		p_dst[count] = p_src[count];
		count ++;
	}
	return (dst);
}

/*int	main(void)
{
	char	str[] = "hello";
	char	str1[] = "world";
	//memcpy(str1, str, 3);
	ft_memcpy(str1, str, 5);
	printf("%s", str1);
	return (0);
}*/
