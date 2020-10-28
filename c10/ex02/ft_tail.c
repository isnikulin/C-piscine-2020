/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcelia <aarcelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 15:48:49 by aarcelia          #+#    #+#             */
/*   Updated: 2020/09/01 20:32:15 by aarcelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_display_error(char *err, char *exec, char *str)
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

void	ft_display_arrows(char *str)
{
	ft_putstr("==> ");
	ft_putstr(str);
	ft_putstr(" <==\n");
}

void	ft_display_file(char *filename, char *exec, int argc, int flag)
{
	int		fd;
	char	c[BUF_SIZE + 1];
	int		buf;

	buf = 0;
	if ((fd = open(filename, O_RDWR)) == -1 && errno != 21)
		ft_display_error(strerror(errno), exec, filename);
	else if (errno == 21)
		ft_putstr("");
	else
		while ((buf = read(fd, &c, BUF_SIZE)) != 0)
		{
			c[buf] = '\0';
			ft_putstr(c);
		}
	if (argc > 2 && !flag)
		ft_putstr("\n");
	close(fd);
}

void	ft_display_input(void)
{
	char c;

	while (read(0, &c, 1))
		write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc == 1)
		ft_display_input();
	else if (argc > 2)
	{
		while (argv[i])
		{
			if (ft_strcmp(argv[i], "--") == 0)
				ft_display_input();
			else
			{
				ft_display_arrows(argv[i]);
				ft_display_file(argv[i], argv[0], argc, i == argc - 1 ? 1 : 0);
			}
			i++;
		}
	}
	return (0);
}
