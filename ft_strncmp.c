/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:25:21 by sosanche          #+#    #+#             */
/*   Updated: 2025/10/08 19:01:19 by soraya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		comp;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		comp = s1[i] - s2[i];
		if (comp != 0)
			return (comp);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[4] = "Mama";
// 	char	s2[4] = "Mala";
// 	size_t	tam = 3;
// 	printf("original: %d \n", strncmp(s1, s2, tam));
// 	printf("yo: %d", ft_strncmp(s1, s2, tam));
// }
