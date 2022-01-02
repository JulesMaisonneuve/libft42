/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumaison <jumaison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 20:11:32 by jumaison          #+#    #+#             */
/*   Updated: 2020/05/07 05:17:54 by jumaison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char ch;

	ch = c;
	while (*str)
	{
		if (*str == ch)
			return ((char*)str);
		str++;
	}
	if (c == '\0')
		return ((char*)str);
	return (0);
}
