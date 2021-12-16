/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_at.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbronwyn <sbronwyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 19:41:11 by sbronwyn          #+#    #+#             */
/*   Updated: 2021/12/16 13:37:58 by sbronwyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	if (nbr < 0)
		return (0);
	i = -1;
	while (++i < nbr)
	{
		if (begin_list == 0)
			return (0);
		begin_list = begin_list->next;
	}
	return (begin_list);
}
