/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:53:52 by soraya            #+#    #+#             */
/*   Updated: 2025/10/17 16:27:35 by soraya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	tam;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (len <= ft_strlen(&s[start]))
		tam = len;
	else if (len > ft_strlen(&s[start]))
		tam = ft_strlen(&s[start]);
	sub = malloc(tam + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, &s[start], tam + 1);
	return (sub);
}
/* 
int	main(void)
{
	printf("%s", ft_substr("Hola que tal", 1, 49));
}
*/