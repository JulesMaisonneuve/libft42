/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumaison <jumaison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 14:06:14 by jumaison          #+#    #+#             */
/*   Updated: 2020/05/07 05:05:56 by jumaison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t num)
{
	size_t	i;
	char	*ptr2;

	ptr2 = (char*)ptr;
	i = 0;
	while (i < num)
	{
		ptr2[i] = '\0';
		i++;
	}
}
