/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:49:45 by soraya            #+#    #+#             */
/*   Updated: 2025/10/15 18:28:59 by soraya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		n1;

	n1 = ft_strlen(s1);
	str = malloc(n1 + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, n1);
	ft_memcpy(&str[n1], s2, ft_strlen(s2) + 1);
	return (str);
}
/* 
int	main(void)
{
	printf("%s", ft_strjoin("hola", "que tal"));
	return (0);
}
 */