/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcelia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 18:26:32 by aarcelia          #+#    #+#             */
/*   Updated: 2020/08/25 19:45:01 by aarcelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int result;

	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	result = nb;
	result = result * ft_recursive_factorial(nb - 1);
	return (result);
}
