/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:27:04 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:38 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	int			counter;
	size_t		len1;
	size_t		len2;

	counter = 0;
	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *) malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, (len1 + 1));
	while (len2--)
	{
		str[len1 + counter] = s2[counter];
		counter ++;
	}
	str[counter + len1] = '\0';
	return (str);
}
/*int main(void)
{
  char *str = ft_strjoin("hello", "world");
  printf("%s", str);
  return (0);
}*/
