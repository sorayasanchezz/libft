/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:19:14 by soraya            #+#    #+#             */
/*   Updated: 2025/10/08 18:22:05 by soraya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    if (!dest && !src)
        return (NULL);
    size_t  i;
    unsigned char *d;
    unsigned char *s;
    
    i = 0;
    d = (unsigned char *)dest;
    s = (unsigned char *)src;

    if (d < s)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    } else if (s < d) {
        i = n;
        while (i-- != 0)
        {
            d[i] = s[i];
        }
    }
    return (dest);
}
/*
int main(void)
{
    char    fr[6] = "01234";
    char    *dest = &fr[1];
    char    *src = &fr[0];
    
    char    fr2[6] = "01234";
    char    *dest2 = &fr2[1];
    char    *src2 = &fr2[0];

    memmove(dest, src, 3);
    printf("Original: %s \n", fr);
    ft_memmove(dest2, src2, 3);
    printf("Mia: %s \n", fr2);
    return (0);
}
    */