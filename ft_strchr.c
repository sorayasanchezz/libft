/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:36:07 by sosanche          #+#    #+#             */
/*   Updated: 2025/10/14 13:26:18 by soraya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*us;
	char	uc;

	i = 0;
	us = (char *)s;
	uc = (char)c;
	while (us[i] != '\0')
	{
		if ((us)[i] == uc)
			return (&(us)[i]);
		i++;
	}
	if (us[i] == uc)
		return (&(us)[i]);
	return (NULL);
}
/*
int	main(void)
{
	printf ("%s", ft_strchr("N       ¡   0 soo00ULL", '\0'));
	char *ptr = NULL;
    printf("%s\n", strchr(ptr, 'a'));
	return (0);
}
*/
