/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcelia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 16:46:20 by aarcelia          #+#    #+#             */
/*   Updated: 2020/08/20 17:03:37 by aarcelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c);

void	ft_print_reverse_alphabet(void)
{
	char character;

	character = 'z';
	while (character >= 'a')
	{
		ft_putchar(character);
		character--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
