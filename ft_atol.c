/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 19:57:12 by soraya            #+#    #+#             */
/*   Updated: 2026/06/22 19:57:55 by soraya           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

long	ft_atol(const char *nptr)
{
	long	num;
	int		i;
	int		sig;

	i = 0;
	num = 0;
	sig = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sig = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return (num * sig);
}
