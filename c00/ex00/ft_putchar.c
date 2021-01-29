/*   Created: 2020/08/19 17:22:40 by Preposterone   */
/*   Updated: 2020/08/20 17:16:50 by Preposterone   */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
