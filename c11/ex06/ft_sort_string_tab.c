/*   Created: 2020/09/02 22:03:29 by Preposterone   */
/*   Updated: 2020/09/02 22:30:51 by Preposterone   */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
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

void	ft_char_swap(char *a, char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		printf("%s", tab[i]);
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			ft_char_swap(tab[i], tab[i + 1]);
		}
		i++;
	}
}
