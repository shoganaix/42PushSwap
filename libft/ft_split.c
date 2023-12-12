/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:00:51 by msoriano          #+#    #+#             */
/*   Updated: 2023/04/04 13:04:08 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordnb(char const *s, char c)
{
	int	counter;
	int	nb;

	counter = 0;
	nb = 0;
	while (s[counter])
	{
		if (s[counter] != c && (s[counter + 1] == c || s[counter + 1] == '\0'))
			nb++;
		counter++;
	}
	return (nb);
}

static char	**ft_free(char **str)
{
	size_t	counter;

	counter = 0;
	while (str[counter] != 0)
	{
		free (str[counter]);
		counter++;
	}
	free (str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	len;
	size_t	counter;

	str = (char **)malloc(sizeof(char *) * (ft_wordnb(s, c) + 1));
	if (!str || !s)
		return (NULL);
	counter = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			len = ft_strchr(s, c) - s;
			if (ft_strchr(s, c) == 0)
				len = ft_strlen(s);
			str[counter++] = ft_substr(s, 0, len);
			if (!str[counter - 1])
				return (ft_free(str));
			s += len;
		}
	}
	str[counter] = NULL;
	return (str);
}
/*int main()
{
	printf("%d\n", ft_wordnb("  HOLA  QUE TAL  ", ' '));
	printf("%d\n", ft_split("  HOLA  QUE TAL  ", ' '));
	return (0);
}*/
