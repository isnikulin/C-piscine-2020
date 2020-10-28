/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcelia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 10:53:28 by aarcelia          #+#    #+#             */
/*   Updated: 2020/08/25 17:56:34 by aarcelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int		ft_handle_exceptions(int nbr, char *base);
int		ft_strlen(char *str);
void	ft_put_base(char *ref, char *base);
int		ft_checkdoubles(char *s1);

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

int		ft_checkdoubles(char *s1)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[j])
		{
			if (s1[i] == s1[j] && i != j)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_put_base(char *ref, char *base)
{
	int		iref;
	int		i;

	iref = 0;
	i = ft_strlen(ref);
	while (i >= 0)
	{
		if (ref[i])
		{
			iref = ref[i] - '0';
			write(1, &base[iref], 1);
		}
		i--;
	}
}

int		ft_handle_exceptions(int nbr, char *base)
{
	if (ft_strlen(base) <= 1 || ft_checkdoubles(base) > 0)
		return (0);
	while (*base)
	{
		if (*base == '-' || *base == '+')
			return (0);
		base++;
	}
	if (nbr < 0)
		write(1, "-", 1);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		t;
	int		m;
	int		e;
	int		i;
	char	c[ft_strlen(base)];

	if (nbr < 0)
		t = -nbr;
	else
		t = nbr;
	m = 0;
	i = 0;
	e = ft_strlen(base);
	if (ft_handle_exceptions(nbr, base))
	{
		while (t)
		{
			m = t % e;
			t = t / e;
			c[i] = m + '0';
			i++;
		}
		c[i] = '\0';
		ft_put_base(c, base);
	}
}
