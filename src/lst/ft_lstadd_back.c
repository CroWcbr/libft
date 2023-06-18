/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdarrell <cdarrell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:50:23 by cdarrell          #+#    #+#             */
/*   Updated: 2023/06/18 14:40:47 by cdarrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_elem)
{
	t_list	*tmp;

	if (!new_elem || !lst)
		return ;
	if (*lst)
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new_elem;
	}
	else
		*lst = new_elem;
}
