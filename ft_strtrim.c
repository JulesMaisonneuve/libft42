/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumaison <jumaison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 19:14:59 by jumaison          #+#    #+#             */
/*   Updated: 2020/05/07 05:31:42 by jumaison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	min;
	size_t	max;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	min = 0;
	while (s1[min] && ft_strchr(set, s1[min]))
		min++;
	max = ft_strlen(s1 + min);
	if (max)
	{
		while (s1[max + min - 1] && ft_strchr(set, s1[max + min - 1]))
			max--;
	}
	result = malloc(sizeof(char) * max + 1);
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s1 + min, max);
	result[max] = '\0';
	return (result);
}
