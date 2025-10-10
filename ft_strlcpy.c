/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:36:21 by soraya            #+#    #+#             */
/*   Updated: 2025/10/10 21:40:54 by soraya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	i = 0;
	while (src[i])
		i++;
	return (i);
}
/* 
int main(void)
{
    char    str[5] = "HAdss";
    printf("%ld \n", strlcpy(str, "Holas", 5));
    printf("%ld \n", ft_strlcpy(str, "Hlass", 5));
}
 */