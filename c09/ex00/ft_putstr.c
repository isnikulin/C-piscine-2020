/*   Created: 2020/08/30 20:31:32 by Preposterone   */
/*   Updated: 2020/08/30 20:31:35 by Preposterone   */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}
