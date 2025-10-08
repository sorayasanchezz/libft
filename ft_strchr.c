/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:36:07 by sosanche          #+#    #+#             */
/*   Updated: 2025/10/08 18:53:24 by soraya           ###   ########.fr       */
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
		if ((s)[i] == c)
			return (&((char *)s)[i]);
		i++;
	}
	if (s[i] == 0)
		return (&((char *)s)[i]);;
	return (NULL);
}
/*
int	main(void)
{
	printf ("%s", ft_strchr("N       ¡   0 soo00ULL", '\0'));
	return (0);
}
*/