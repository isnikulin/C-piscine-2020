/*   Created: 2020/09/02 15:42:16 by Preposterone   */
/*   Updated: 2020/09/02 22:01:56 by Preposterone   */

#include "ft.h"

int			ft_switch(char *operator)
{
	if (ft_strcmp(operator, "+") == 0)
		return (0);
	else if (ft_strcmp(operator, "-") == 0)
		return (1);
	else if (ft_strcmp(operator, "*") == 0)
		return (4);
	else if (ft_strcmp(operator, "/") == 0)
		return (2);
	else if (ft_strcmp(operator, "%") == 0)
		return (3);
	return (5);
}

long int	ft_solve(long int a, long int b, char *operator)
{
	long int	(*mathfun[5])(long int, long int);
	int			n;

	mathfun[0] = &ft_add;
	mathfun[1] = &ft_minus;
	mathfun[2] = &ft_division;
	mathfun[3] = &ft_modulo;
	mathfun[4] = &ft_multiplication;
	if ((n = ft_switch(operator)) == 5)
		return (0);
	return (mathfun[n](a, b));
}

long int	ft_atoi(char *str)
{
	long int	num;
	long int	mod;
	int			i;

	mod = 1;
	num = 0;
	i = 0;
	while ((str[i] && str[i] == '-') || (str[i] && str[i] == '+'))
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

int			main(int argc, char **argv)
{
	long int a;
	long int b;

	a = 0;
	b = 0;
	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_strcmp(argv[2], "/") == 0 && b == 0)
	{
		ft_putstr(ERR_DIV_BY_ZERO);
		return (0);
	}
	else if (ft_strcmp(argv[2], "%") == 0 && b == 0)
	{
		ft_putstr(ERR_MOD_BY_ZERO);
		return (0);
	}
	else
	{
		ft_putnbr(ft_solve(a, b, argv[2]));
	}
}
