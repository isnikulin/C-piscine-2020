/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcelia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:20:48 by aarcelia          #+#    #+#             */
/*   Updated: 2020/08/25 10:11:59 by aarcelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iswhitespace(char *str)
{
	if (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' ||
		*str == '\r' || *str == ' ' || *str == '-' || *str == '+')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int	num;
	int	mod;
	int i;

	mod = 1;
	num = 0;
	i = 0;
	while (str[i] && ft_iswhitespace(&str[i]))
	{
		if (str[i] == '-')
			mod *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * mod);
}
