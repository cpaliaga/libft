/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:36:02 by caliaga-          #+#    #+#             */
/*   Updated: 2022/12/12 13:53:50 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rtn;
	t_list	*sure;

	rtn = malloc(sizeof(t_list));
	if (!rtn)
		return (rtn = NULL);
	sure = rtn;
	sure->next = NULL;
	sure->content = content;
	return (rtn);
}
