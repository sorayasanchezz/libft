/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:04:52 by soraya            #+#    #+#             */
/*   Updated: 2025/10/10 21:46:06 by soraya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*unss;

	i = 0;
	unss = (unsigned char *)s;
	while (i < n)
	{
		if (unss[i] == (unsigned char)c)
			return (&unss[i]);
		i++;
	}
	return (NULL);
}
