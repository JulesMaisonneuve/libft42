/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumaison <jumaison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 14:44:37 by jumaison          #+#    #+#             */
/*   Updated: 2020/05/07 05:27:38 by jumaison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementcount, size_t elementsize)
{
	void *ptr;

	if (elementcount == 0 || elementsize == 0)
	{
		elementcount = 1;
		elementsize = 1;
	}
	ptr = malloc(elementcount * elementsize);
	if (ptr)
		ft_bzero(ptr, elementcount * elementsize);
	return (ptr);
}
