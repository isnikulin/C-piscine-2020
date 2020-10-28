/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcelia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 21:20:07 by aarcelia          #+#    #+#             */
/*   Updated: 2020/08/22 22:25:11 by aarcelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_charlowcase(char str)
{
	return (str += 32);
}

char	ft_charupcase(char str)
{
	return (str -= 32);
}

int		ft_char_is_whitespace(char str)
{
	if (str == ' ' || str == '+' || str == '-' || str < 31)
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	acc;

	i = 0;
	acc = ' ';
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && !ft_char_is_whitespace(acc))
		{
			str[i] = ft_charlowcase(str[i]);
		}
		else if (str[i] >= 'a' && str[i] <= 'z' && ft_char_is_whitespace(acc))
		{
			str[i] = ft_charupcase(str[i]);
		}
		acc = str[i];
		i++;
	}
	return (str);
}
