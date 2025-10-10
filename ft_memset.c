/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:01:51 by sosanche          #+#    #+#             */
/*   Updated: 2025/10/10 21:53:29 by soraya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/* 
int	main(void)
{
	char	frase[2];
	unsigned char	frase2[2];

	frase[0] = 255;
	frase2[0] = 255;

	printf("char      : %d\n", frase[0]);
    printf("unsigned  : %d\n", frase2[0]);

	return (0);
}
 */