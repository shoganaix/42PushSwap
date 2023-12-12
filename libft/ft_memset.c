/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:53:56 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:24 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char				*p_b;
	unsigned long long	count;
	unsigned char		chr;

	chr = (unsigned char) c;
	count = 0;
	p_b = (char *)b;
	while (len > count)
	{
		p_b[count] = chr;
		count ++;
	}
	return (b);
}

/*int	main(int argc, char **argv)
{
	(void)argc;
	//memset(argv[1], 'b', 3);
	ft_memset(argv[1], 'b', 3);
	printf("%s", argv[1]);
	return (0);
}*/
