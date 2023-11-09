/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 15:51:31 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:32:55 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char				*str;
	unsigned long long	counter;

	counter = 0;
	str = (char *)s;
	while (counter < n)
	{
		str[counter] = 0;
		counter++;
	}
}
/*
int    main(void)
{
    printf("%s\n", ft_calloc(1, 5));
    printf("%s", calloc(1, 5));
    return (0);
}*/
