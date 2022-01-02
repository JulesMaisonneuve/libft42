/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumaison <jumaison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 19:30:27 by jumaison          #+#    #+#             */
/*   Updated: 2020/05/07 05:24:08 by jumaison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t num)
{
	size_t	len;

	if (*little == 0)
		return ((char*)big);
	len = ft_strlen(little);
	while (*big && num-- >= len)
	{
		if (*big == *little && ft_memcmp(big, little, len) == 0)
			return ((char*)big);
		big++;
	}
	return (NULL);
}
