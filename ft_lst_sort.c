/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbronwyn <sbronwyn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 12:38:38 by sbronwyn          #+#    #+#             */
/*   Updated: 2021/12/16 13:41:35 by sbronwyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	swap_elements(t_list **prev, t_list **elem)
{
	t_list	*temp;

	if (*prev)
		(*prev)->next = (*elem)->next;
	temp = (*elem)->next->next;
	(*elem)->next->next = (*elem);
	(*elem)->next = temp;
	return (0);
}

static void	increment(t_list **prev, t_list **list)
{
	*prev = *list;
	*list = (*list)->next;
}

void	ft_lst_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*prev;
	t_list	*list;
	int		is_sorted;

	if (!begin_list)
		return ;
	list = *begin_list;
	is_sorted = 0;
	while (!is_sorted && list)
	{
		prev = 0;
		list = *begin_list;
		is_sorted = 1;
		while (list->next)
		{
			if (cmp(list->content, list->next->content) > 0)
			{
				if (!prev)
					*begin_list = list->next;
				is_sorted = swap_elements(&prev, &list);
				break ;
			}
			increment(&prev, &list);
		}
	}
}
