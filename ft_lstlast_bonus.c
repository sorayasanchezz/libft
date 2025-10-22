/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soraya <soraya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:35:57 by soraya            #+#    #+#             */
/*   Updated: 2025/10/21 21:49:38 by soraya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	int	n;

	i = 1;
	if (!lst)
		return (NULL);
	n = ft_lstsize(lst);
	while (i < n)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
