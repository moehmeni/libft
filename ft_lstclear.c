/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmomeni <mmomeni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:07:30 by mmomeni           #+#    #+#             */
/*   Updated: 2023/03/31 19:04:22 by mmomeni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		next_tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_tmp;
	}
	*lst = NULL;
}
