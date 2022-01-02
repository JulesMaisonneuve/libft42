/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jumaison <jumaison@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 18:22:48 by jumaison          #+#    #+#             */
/*   Updated: 2020/05/27 15:21:07 by jumaison         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	substr = malloc(sizeof(char) * len + 1);
	if (substr == NULL)
		return (NULL);
	while (s[start] != '\0' && len > 0)
	{
		substr[i] = s[start];
		start++;
		len--;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
