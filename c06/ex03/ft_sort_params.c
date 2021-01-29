/*   Created: 2020/08/27 12:29:31 by Preposterone   */
/*   Updated: 2020/08/27 18:49:10 by Preposterone   */

#include <unistd.h>

int			ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	c1 = (unsigned char)s1[i];
	c2 = (unsigned char)s2[i];
	while (c1 == c2)
	{
		if (!c1)
			return (c1 - c2);
		i++;
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
	}
	return (c1 - c2);
}

void		ft_sort(int argc, char *argv[])
{
	int		i;
	char	*c;
	int		j;

	i = 1;
	j = 1;
	while (j <= argc - 1)
	{
		i = 1;
		while (i <= argc - j - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				c = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = c;
			}
			i++;
		}
		j++;
	}
}

void		ft_print(int argc, char *argv[])
{
	int arglen;
	int i;

	arglen = 0;
	i = 1;
	while (argc >= 1 && i < argc)
	{
		arglen = 0;
		while (argv[i][arglen])
			arglen++;
		write(1, argv[i], arglen);
		write(1, "\n", 1);
		i++;
	}
}

int			main(int argc, char *argv[])
{
	if (argc > 1)
		ft_sort(argc, argv);
	ft_print(argc, argv);
	return (0);
}
