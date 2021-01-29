/*   Created: 2020/08/19 17:26:19 by Preposterone   */
/*   Updated: 2020/08/20 17:04:04 by Preposterone   */

#include <unistd.h>

void		ft_putchar (char c);

void		ft_print_alphabet(void)
{
	char character;

	character = 'a';
	while (character <= 'z')
	{
		ft_putchar(character);
		character++;
	}
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
