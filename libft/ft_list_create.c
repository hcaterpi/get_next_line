/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcaterpi <hcaterpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:12:35 by hcaterpi          #+#    #+#             */
/*   Updated: 2019/09/14 14:37:20 by hcaterpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_create(int fd, char *str)
{
	t_list	*current;

	current = malloc(sizeof(t_list));
	if (current)
	{
		current->fd = fd;
		current->str = str;
		current->next = NULL;
	}
	return (current);
}
