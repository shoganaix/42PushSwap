/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:21:43 by msoriano          #+#    #+#             */
/*   Updated: 2023/04/06 12:32:30 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long long	counter1;
	unsigned long long	counter2;

	counter1 = 0;
	if (needle == '\0' )
		return ((char *) haystack);
	while (haystack[counter1] && counter1 < len)
	{
		counter2 = 0;
		while ((haystack[counter1 + counter2] != '\0')
			&& ((haystack[counter1 + counter2]) == needle[counter2])
			&& (counter1 + counter2) < len)
		{
			if (needle[counter2 + 1] == '\0')
				return ((char *) haystack + counter1);
			counter2++;
		}
		counter1++;
	}
	return (NULL);
}
/*
int    main(void)
{
    printf("%s\n", ft_strnstr("Holasss", 5, 5));
    printf("%s", strnstr("Holasss", 5, 5));
    return (0);
}*/
