/*   Created: 2020/08/31 15:48:49 by Preposterone   */
/*   Updated: 2020/09/01 19:13:18 by Preposterone   */

#include "ft.h"

void	ft_display_error(char *str)
{
	write(2, str, ft_strlen(str));
}

void	ft_display_file(char *filename)
{
	int		fd;
	char	c;

	fd = open(filename, O_RDWR);
	if (fd == -1)
		ft_display_error(ERR_CANT_READ);
	else
	{
		while (read(fd, &c, 1) != 0)
			ft_putchar(c);
		close(fd);
	}
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		ft_display_error(ERR_NO_ARG);
	else if (argc > 2)
		ft_display_error(ERR_TOO_MANY);
	else
		ft_display_file(argv[1]);
	return (0);
}
