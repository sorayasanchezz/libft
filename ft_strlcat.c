/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:55:16 by soraya            #+#    #+#             */
/*   Updated: 2025/10/09 19:51:38 by soraya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dsize)
{
    size_t  i;
    size_t  j;
    size_t  temp;

    i = 0;
    j = 0;
    while (dst[i])
        i++;
    while (src[j])
        j++;
    if (dsize <= i)
        return (dsize + j);
    temp = i + j;
    j = 0;
    while (src[j] && j < (dsize - i - 1))
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = 0;
    return (temp);
}