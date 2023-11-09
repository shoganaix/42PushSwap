/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 19:57:25 by msoriano          #+#    #+#             */
/*   Updated: 2023/04/04 13:07:17 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len ++;
	while (n)
	{
		n = n / 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	nbr;
	int		len;

	len = ft_len(n);
	nbr = (long int) n;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len--] = '\0';
	if (nbr == 0)
		result[len] = '0';
	if (nbr < 0)
	{
		result [0] = '-';
		nbr *= (-1);
	}
	while (nbr != 0)
	{
		result[len] = (nbr % 10) + '0';
		nbr /= 10;
		len --;
	}
	return (result);
}
/*int	main(void)
{
	int n = -123456;
	char *str = ft_itoa(n);
	printf("%d en una cadena: %s\n", n, str);
	return (0);
}*/
