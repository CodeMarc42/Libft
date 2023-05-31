/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marza-ga <marza-ga-@student.42barcelo      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:00:00 by marza-ga          #+#    #+#             */
/*   Updated: 2021/11/05 12:00:00 by marza-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*last_element;
	t_list	*element;

	if (!lst)
		return ;
	element = *lst;
	while (element)
	{
		last_element = element;
		element = element->next;
		del(last_element->content);
		free(last_element);
	}
	*lst = NULL;
}
