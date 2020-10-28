/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcelia <aarcelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 13:25:27 by aarcelia          #+#    #+#             */
/*   Updated: 2020/09/02 20:14:40 by aarcelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

long int	ft_nbrlen(long int nb)
{
	int r;

	r = 0;
	while (nb)
	{
		nb /= 10;
		r++;
	}
	return (r);
}

long int	ft_exceptions(long int nb)
{
	if (nb == 0)
		ft_putchar('0');
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	return (nb);
}

void		ft_putnbr(long int nb)
{
	char		s[ft_nbrlen(nb)];
	int			i;
	int			a;
	long int	n;

	i = 0;
	a = 0;
	n = ft_exceptions(nb);
	while (n)
	{
		s[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	s[i] = '\0';
	while (i >= 0)
	{
		if (s[i])
			ft_putchar(s[i]);
		i--;
	}
	ft_putchar('\n');
}
