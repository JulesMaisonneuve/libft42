/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumaison <jumaison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:38:29 by jumaison          #+#    #+#             */
/*   Updated: 2020/05/02 19:21:43 by jumaison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t num)
{
	unsigned char *ptrdest;
	unsigned char *ptrsrc;

	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	while (num--)
	{
		if ((*ptrdest = *ptrsrc) == (unsigned char)c)
			return (ptrdest + 1);
		ptrdest++;
		ptrsrc++;
	}
	return (0);
}
