/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcelia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 22:45:18 by aarcelia          #+#    #+#             */
/*   Updated: 2020/08/21 23:07:39 by aarcelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int array[size];
	int index;

	index = 0;
	while (size - 1  >= 0)
	{
		*tab[size] = array[index];
		index++;
		size--;
	}
}
