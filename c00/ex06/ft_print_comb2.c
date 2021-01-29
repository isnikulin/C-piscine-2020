/*   Created: 2020/08/20 20:13:37 by Preposterone   */
/*   Updated: 2020/08/20 21:27:17 by Preposterone   */

#include <unistd.h>

void		ft_putchar(char c);
void		ft_convert(int num);

void		ft_print_comb2(void)
{
	int index;
	/*int numbers[100];*/

	index = 0;
	while (index <=15)
	{
		ft_convert(index);
		index++;
	}
	/*while (index <= 15)
	{
		numbers[i] = i;
		index++;
	}*/
}

void		ft_convert(int num)
{
	if (num > 10)
	{
		ft_putchar(((int)num / 10) + '0');
		ft_putchar(((int)num % 10) + '0');
	}
	else
	{
		ft_putchar(num +'0');
	}
	ft_putchar('\n');
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_print_comb2();
}
