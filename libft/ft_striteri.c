/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:56:19 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:35 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	counter;

	counter = 0;
	while (s[counter])
	{
		(*f)(counter, &s[counter]);
		counter ++;
	}
}
/*int main()
{
    char *str = "lorem ipsum";
    ft_striteri(str, &f);
    return(0);
}*/
