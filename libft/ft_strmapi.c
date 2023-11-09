/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:11:48 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:47 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	counter;

	counter = 0;
	str = (char *) malloc (ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[counter])
	{
		str[counter] = (*f)(counter, s[counter]);
		counter ++;
	}
	str[counter] = '\0';
	return (str);
}
/*int main()
{
    char *str = "lorem ipsum";
    ft_strmapi(str, &f);
    return(0);
}*/
