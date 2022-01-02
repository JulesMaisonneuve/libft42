/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumaison <jumaison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 14:13:42 by jumaison          #+#    #+#             */
/*   Updated: 2020/05/07 05:07:17 by jumaison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t	i;
	char	*ptrdest;
	char	*ptrsrc;

	if (dest == NULL && src == NULL)
		return (0);
	ptrdest = (char*)dest;
	ptrsrc = (char*)src;
	i = 0;
	while (i < num)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (ptrdest);
}
