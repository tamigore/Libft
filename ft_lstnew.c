/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 18:06:22 by tamigore          #+#    #+#             */
/*   Updated: 2018/11/14 18:49:38 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*p;

	if (content == NULL)
	{
		p->content = NULL;
		p->content_size = 0;
	}
	else
	{
		if (!(p = malloc(content_size)))
			return (NULL);
		p->content_size = content_size;
		p->content = content;
	}
	p->next == NULL;
	return (p);
}
