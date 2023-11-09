/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:49:43 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:46 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	unsigned long long	count;

	count = 0;
	while (s[count])
	{
		count ++;
	}
	return (count);
}
/*int	main(void)
{
	printf("%d", ft_strlen("hola"));
	return (0);
}*/
