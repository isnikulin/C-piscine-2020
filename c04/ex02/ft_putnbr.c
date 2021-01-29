/*   Created: 2020/08/24 13:25:27 by Preposterone   */
/*   Updated: 2020/08/24 18:05:16 by Preposterone   */

#include <unistd.h>

int		ft_nbrlen(int nb)
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_exceptions(int nb)
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

void	ft_putnbr(int nb)
{
	char			s[ft_nbrlen(nb)];
	int				i;
	int				a;
	unsigned int	n;

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
}
