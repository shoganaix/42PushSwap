/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:42:21 by msoriano          #+#    #+#             */
/*   Updated: 2023/04/04 12:52:07 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*chr;
	int		counter;

	counter = 0;
	c = (unsigned char) c;
	chr = (char *) s;
	while (chr[counter] != c)
	{
		if (chr[counter] == '\0')
			return (NULL);
		counter++;
	}
	return (chr + counter);
}
/*
int	main(void)
{
	printf("%s\n", ft_strchr("Hola que tal", ' '));
	printf("%s", strchr("Hola que tal", ' '));
	return (0);
}
*/