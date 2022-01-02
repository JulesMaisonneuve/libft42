/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumaison <jumaison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 18:18:34 by jumaison          #+#    #+#             */
/*   Updated: 2020/05/12 17:34:11 by jumaison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	char		*ptrdest;
	const char	*ptrsrc;

	if (dest == NULL && src == NULL)
		return (0);
	ptrdest = dest;
	ptrsrc = src;
	if (ptrsrc < ptrdest)
	{
		while (num--)
			ptrdest[num] = ptrsrc[num];
	}
	else
		ft_memcpy(dest, src, num);
	return (dest);
}
