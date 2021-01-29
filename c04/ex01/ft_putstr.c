/*   Created: 2020/08/24 13:17:27 by Preposterone   */
/*   Updated: 2020/08/24 13:23:55 by Preposterone   */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
