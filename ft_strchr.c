/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosanche <sosanche@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:36:07 by sosanche          #+#    #+#             */
/*   Updated: 2025/10/06 18:33:40 by sosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (((char *)s)[i] == c)
			return (&((char *)s)[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf ("%s", ft_strchr("N       ¡   0 soo00ULL", '\0'));
	return (0);
}
*/