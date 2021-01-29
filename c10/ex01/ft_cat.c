/*   Created: 2020/08/31 15:48:49 by Preposterone   */
/*   Updated: 2020/09/01 21:14:57 by Preposterone   */

#include "ft.h"

void	ft_display_error(char *err, char *exec, char *str)
{
	if (ft_strcmp(str, "--") != 0)
	{
		write(2, basename(exec), ft_strlen(exec));
		write(2, ": ", 2);
		if (str)
		{
			write(2, str, ft_strlen(str));
			write(2, ": ", 2);
		}
		write(2, err, ft_strlen(err));
		write(2, "\n", 1);
	}
}

void	ft_display_file(char *filename, char *exec)
{
	int		fd;
	char	c[BUF_SIZE + 1];
	int		buf;

	buf = 0;
	if ((fd = open(filename, O_RDWR)) == -1)
		ft_display_error(strerror(errno), exec, filename);
	else
		while ((buf = read(fd, &c, BUF_SIZE)))
		{
			c[buf] = '\0';
			ft_putstr(c);
		}
	close(fd);
}

void	ft_display_input(void)
{
	char	c[BUF_SIZE + 1];
	int		buf;

	while ((buf = read(0, &c, BUF_SIZE)))
	{
		c[buf] = '\0';
		ft_putstr(c);
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc == 1 || (ft_strcmp(argv[1], "--") == 0 && argc == 2))
		ft_display_input();
	while (argv[i])
	{
		if (ft_strcmp(argv[i], "-") == 0)
			ft_display_input();
		else
			ft_display_file(argv[i], argv[0]);
		i++;
	}
	return (0);
}
