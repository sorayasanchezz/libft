/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosanche <sosanche@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:55:16 by soraya            #+#    #+#             */
/*   Updated: 2025/10/22 20:09:41 by sosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
		j++;
	if (size <= i)
		return (size + j);
	else
		size -= i;
	temp = i + j;
	j = 0;
	while (src[j] && j < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (temp);
}
/* 
int main(void)
{
	char str[] = "pqrstuvwxyz";
	ft_strlcat(str, "abcd", 0);
	return (0);
} */