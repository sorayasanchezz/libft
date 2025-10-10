/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 20:36:39 by soraya            #+#    #+#             */
/*   Updated: 2025/10/10 21:47:36 by soraya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*uns1;
	unsigned char	*uns2;

	if (!n)
		return (0);
	i = 0;
	uns1 = (unsigned char *)s1;
	uns2 = (unsigned char *)s2;
	while (i < n)
	{
		if (uns1[i] != uns2[i])
			return (uns1[i] - uns2[i]);
		i++;
	}
	return (0);
}
