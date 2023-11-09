/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:57:39 by msoriano          #+#    #+#             */
/*   Updated: 2023/11/09 21:51:09 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc (count * size);
	if (ptr != '\0')
	{
		ft_bzero(ptr, count * size);
		return (ptr);
	}
	else
		return (NULL);
}
/*if (ptr == 0 || size == SIZE_MAX || size == SIZE_MIN)
int    main(void)
{
    int *s1 = ft_calloc(5, sizeof(int));
    int *s2 = calloc(5, sizeof(int));
    printf("%d\n", *s1);
    printf("%d", *s2);
    //free(s1);
    //free(s2);
    return (0);
}*/
