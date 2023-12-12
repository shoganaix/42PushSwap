/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:29:34 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:54 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*chr;

	c = (unsigned char) c;
	len = ft_strlen(s);
	chr = (char *) s;
	while (len >= 0)
	{
		if (chr[len] == c)
			return (chr + len);
		len--;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strrchr("Holaaas", 'a'));
	printf("%s", strrchr("Holaaas", 'a'));
	return (0);
}*/