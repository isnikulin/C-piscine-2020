/*   Created: 2020/08/20 17:23:48 by Preposterone   */
/*   Updated: 2020/08/20 17:30:03 by Preposterone   */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('P');
		ft_putchar('\n');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
