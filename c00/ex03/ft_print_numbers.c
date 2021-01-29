/*   Created: 2020/08/20 17:07:25 by Preposterone   */
/*   Updated: 2020/08/20 17:18:30 by Preposterone   */

#include <unistd.h>

void	ft_putchar (char c);

void	ft_print_numbers(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
