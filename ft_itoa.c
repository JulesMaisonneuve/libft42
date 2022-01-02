/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumaison <jumaison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 14:54:05 by jumaison          #+#    #+#             */
/*   Updated: 2020/05/11 14:54:27 by jumaison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		nblen(long int n)
{
	int			len;

	len = 0;
	while (n > 9)
	{
		len++;
		n /= 10;
	}
	len++;
	return (len);
}

char			*ft_itoa(int nb)
{
	char		*res;
	int			pos;
	int			sign;
	long int	n;

	n = nb;
	sign = 0;
	if (n < 0)
		sign = 1;
	if (n < 0)
		n *= -1;
	pos = nblen(n) + sign;
	if (!(res = (char*)malloc(sizeof(char) * (pos + 1))))
		return (NULL);
	if (n == 0)
		res[0] = '0';
	res[pos] = '\0';
	while (n != 0)
	{
		res[pos-- - 1] = (char)(n % 10) + 48;
		n /= 10;
	}
	if (sign == 1)
		res[pos - 1] = '-';
	return (res);
}
