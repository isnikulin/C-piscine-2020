/*   Created: 2020/09/01 21:49:47 by Preposterone   */
/*   Updated: 2020/09/02 09:40:54 by Preposterone   */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int		*ret;
	int		i;

	i = 0;
	ret = (int *)malloc(sizeof(int) * length);
	while (*tab && length > 0)
	{
		ret[i] = f(*tab);
		length--;
		tab++;
		i++;
	}
	return (ret);
}
