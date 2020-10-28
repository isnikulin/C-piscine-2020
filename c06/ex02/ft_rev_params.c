/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcelia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 12:21:53 by aarcelia          #+#    #+#             */
/*   Updated: 2020/08/27 12:23:47 by aarcelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int arglen;
	int i;

	arglen = 0;
	i = argc - 1;
	while (argc >= 1 && i > 0)
	{
		arglen = 0;
		while (argv[i][arglen])
			arglen++;
		write(1, argv[i], arglen);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
