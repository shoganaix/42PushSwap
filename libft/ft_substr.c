/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:18:34 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:57 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*str;
	unsigned int		i;

	if (s == 0)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen (s + start))
		len = ft_strlen (s + start);
	str = (char *) malloc (len + 1);
	i = 0;
	if (str == 0)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i ++;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main(void)
{
	char *s = "lorem ipsum";
	printf("%s", ft_substr(s, 2, 5));
	return(0);
}*/
