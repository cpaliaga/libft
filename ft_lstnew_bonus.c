/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caliaga- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:36:02 by caliaga-          #+#    #+#             */
/*   Updated: 2022/12/06 16:14:19 by caliaga-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*rtn;
	t_list	*sure;

	rtn = (t_list *)malloc(sizeof(t_list));
	if (!rtn)
		return (rtn = NULL);
	sure = rtn;
	sure->next = NULL;
	sure->content = content;
	return (rtn);
}
