/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msoriano <msoriano@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:13:20 by msoriano          #+#    #+#             */
/*   Updated: 2023/03/31 17:33:55 by msoriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strrchr(set, s1[start]))
		start ++;
	while (s1[end] && ft_strrchr(set, s1[end]))
		end --;
	str = ft_substr(s1, start, (end - start + 1));
	return (str);
}
/*int	main(void)
{
	char *s1 = "   hola  ";
	char *set = " ";
	char *trimmed = ft_strtrim(s1, set);
	printf("'%s' sin espacios: '%s'\n", s1, trimmed);
	free(trimmed);
*/
