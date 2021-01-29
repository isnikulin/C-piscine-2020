/*   Created: 2020/08/20 16:46:20 by Preposterone   */
/*   Updated: 2020/08/20 17:03:37 by Preposterone   */

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
