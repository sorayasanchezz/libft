/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:48:20 by soraya            #+#    #+#             */
/*   Updated: 2025/10/22 03:02:30 by soraya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(long num)
{
	size_t	size;

	size = 1;
	if (num < 0)
	{
		num = -num;
		size++;
	}
	while (num > 9)
	{
		num /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	long	num;
	char	*str;

	num = n;
	size = ft_nbrlen(num);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	if (num < 0)
		num = -num;
	str[size] = '\0';
	while (size != 0)
	{
		str[--size] = (num % 10 + '0');
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
