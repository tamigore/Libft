/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:06:18 by tamigore          #+#    #+#             */
/*   Updated: 2018/11/16 14:31:41 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *p;

	if (!(p = malloc(sizeof(*p))))
		return (NULL);
	while (lst->next != NULL)
	{
		p = (*f)(lst);
		p = lst->next;
		lst = lst->next;
	}
	return (p);
}
