/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumaison <jumaison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 18:55:04 by jumaison          #+#    #+#             */
/*   Updated: 2020/05/07 05:04:31 by jumaison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;
	char	*ptr2;

	ptr2 = (char*)ptr;
	i = 0;
	while (i < num)
	{
		ptr2[i] = value;
		i++;
	}
	return (ptr2);
}
