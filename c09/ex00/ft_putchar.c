/*   Created: 2020/08/30 20:31:02 by Preposterone   */
/*   Updated: 2020/08/30 20:31:05 by Preposterone   */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
