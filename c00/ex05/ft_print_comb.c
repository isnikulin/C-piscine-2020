/*   Created: 2020/08/20 17:39:16 by Preposterone   */
/*   Updated: 2020/08/20 20:49:59 by Preposterone   */

#include <unistd.h>

void		ft_putchar (char c);

void		ft_concat(char one, char two, char thr)
{
	ft_putchar(one);
	ft_putchar(two);
	ft_putchar(thr);
	if (one != '7' || two != '8' || thr != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void		ft_print_comb(void)
{
	char frst;
	char scnd;
	char thrd;

	frst = '0';
	scnd = '1';
	thrd = '2';
	while (frst <= '7')
	{
		while (scnd <= '8')
		{
			while (thrd <= '9')
			{
				if (frst != scnd && frst != thrd && scnd != thrd)
				{
					ft_concat(frst, scnd, thrd);
				}
				thrd++;
			}
			thrd = '0';
			scnd++;
		}
		scnd = '0';
		frst++;
	}
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
