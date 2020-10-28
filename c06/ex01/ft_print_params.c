/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcelia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 11:40:11 by aarcelia          #+#    #+#             */
/*   Updated: 2020/08/27 12:20:05 by aarcelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
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
	return (0);
}
