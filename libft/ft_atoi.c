/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:19:56 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:32:53 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	count;
	int	nbr;

	count = 0;
	sign = 1;
	while ((str[count] == 32) || (str[count] >= 9 && str[count] <= 13))
	{
		count ++;
	}
	if (str[count] == 43 || str[count] == 45)
	{
		if (str[count] == 45)
			sign *= -1;
		count ++;
	}
	nbr = 0;
	while (str[count] >= 48 && str[count] <= 57)
	{
		nbr = nbr * 10 + (str[count] - 48);
		count ++;
	}
	result = nbr * sign;
	return (result);
}

/*int	main(void)
{
	printf("%d", ft_atoi("546:5"));
	return (0);
}*/
