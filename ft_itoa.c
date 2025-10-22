/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:48:20 by soraya            #+#    #+#             */
/*   Updated: 2025/10/21 18:10:31 by soraya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(long num)
{
	size_t	tam;

	tam = 1;
	if (num < 0)
	{
		num = -num;
		tam++;
	}
	while (num > 9)
	{
		num /= 10;
		tam++;
	}
	return (tam);
}

char	*ft_itoa(int n)
{
	size_t	tam;
	long	num;
	char	*str;

	num = n;
	tam = ft_nbrlen(num);
	str = malloc(tam + 1);
	if (!str)
		return (NULL);
	if (num < 0)
		num = -num;
	str[tam] = '\0';
	while (tam != 0)
	{
		str[--tam] = (num % 10 + '0');
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
