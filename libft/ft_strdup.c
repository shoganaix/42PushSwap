/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:35:47 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:33 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned long long	counter;
	char				*p;
	char				*ss1;

	ss1 = (char *) s1;
	counter = 0;
	p = (char *)malloc(ft_strlen(s1) + (sizeof(char) * 1));
	if (p == '\0')
		return (NULL);
	while (ss1[counter] != '\0')
	{
		p[counter] = ss1[counter];
		counter ++;
	}
	p[counter] = '\0';
	return (p);
}
/*
int main(void)
{
	const char *s1 = "Hello, world!";
	printf("%s\n", strdup(s1));
    printf("%s\n", ft_strdup(s1));
    return (0);
}*/
