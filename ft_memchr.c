/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumaison <jumaison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 18:33:21 by jumaison          #+#    #+#             */
/*   Updated: 2020/05/02 19:01:44 by jumaison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t num)
{
	unsigned char ch;
	unsigned char *pstr;

	ch = (unsigned char)c;
	pstr = (unsigned char*)str;
	while (num--)
	{
		if (*pstr != ch)
			pstr++;
		else
			return (pstr);
	}
	return (0);
}
