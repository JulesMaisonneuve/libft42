/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumaison <jumaison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 20:10:09 by jumaison          #+#    #+#             */
/*   Updated: 2020/05/15 17:26:10 by jumaison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	char ch;
	char *res;

	ch = c;
	res = NULL;
	while (*str)
	{
		if (*str == ch)
			res = str;
		str++;
	}
	if (ch == '\0')
		return (str);
	if (res != NULL)
		return (res);
	return (0);
}
