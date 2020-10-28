/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcelia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 20:20:21 by aarcelia          #+#    #+#             */
/*   Updated: 2020/08/26 15:41:40 by aarcelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_solve_recursively(int nb, int power)
{
	if (power > 0)
	{
		nb = nb * ft_solve_recursively(nb, power - 1);
		return (nb);
	}
	return (1);
}

int		ft_recursive_power(int nb, int power)
{
	int result;

	if (power < 0 || (nb == 0 && power > 0))
		return (0);
	else if (power == 0 && nb < 0)
		return (1);
	result = ft_solve_recursively(nb, power);
	return (result);
}
