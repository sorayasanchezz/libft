/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:58:33 by soraya            #+#    #+#             */
/*   Updated: 2025/10/14 17:24:49 by soraya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == 0)
		return ((char *)&big[i]);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == 0)
				return ((char *)&big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
/* 
int	main(void)
{
	ft_strnstr("", "", 0);
	return (0);
}
 */