/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:53:59 by sosanche          #+#    #+#             */
/*   Updated: 2025/10/08 18:58:57 by soraya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return (&((char *)s)[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("Soraya: %s\n", ft_strrchr("Hola ques tass laS", 'q'));
	printf("Original: %s\n", strrchr("Hola ques tass laS", 'q'));
	return (0);
}
*/