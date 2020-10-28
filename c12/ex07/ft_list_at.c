/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcelia <aarcelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 21:55:38 by aarcelia          #+#    #+#             */
/*   Updated: 2020/09/03 22:11:49 by aarcelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *temp;

	temp = begin_list;
	while (temp->next && nbr >= 0)
	{
		temp = temp->next;
		nbr--;
	}
	return (temp);
}
