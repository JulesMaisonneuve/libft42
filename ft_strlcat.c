/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumaison <jumaison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 16:44:20 by jumaison          #+#    #+#             */
/*   Updated: 2020/05/17 17:13:10 by jumaison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		destlen;
	char		*ptrdest;
	const char	*ptrsrc;

	ptrdest = dest;
	ptrsrc = src;
	while (*ptrdest && size)
	{
		ptrdest++;
		size--;
	}
	destlen = ptrdest - dest;
	if (size == 0)
		return (destlen + ft_strlen(src));
	while (*ptrsrc)
	{
		if (size != 1)
		{
			*ptrdest++ = *ptrsrc;
			size--;
		}
		ptrsrc++;
	}
	*ptrdest = '\0';
	return (destlen + (ptrsrc - src));
}
